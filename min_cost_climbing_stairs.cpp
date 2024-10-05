#include<bits/stdc++.h>
using namespace std;
vector<int> vec;
int minCost(int n){
    //base case
    if(n == 0)
        return vec[0];
    if(n==1)  
        return vec[1];
    int oneStep = minCost(n-1);
    int twoStep = minCost(n-2);
    return vec[n] + min(oneStep, twoStep);
}
int main()
{
    int n;
    cin>>n;
    vec.resize(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    cout<<min(minCost(n-1),minCost(n-2))<<endl;

    return 0;
}