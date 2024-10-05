#include<bits/stdc++.h>
using namespace std;
long long int n;
bool reachValue(long long current,long long n){
    if(n < current)
        return false;
    if(n == current)
        return true;
    else
        return reachValue(current*10,n) || reachValue(current*20,n);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        if(reachValue(1,n)==true)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }

    return 0;
}