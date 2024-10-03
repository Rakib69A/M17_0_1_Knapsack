#include<bits/stdc++.h>
using namespace std;
int Knapsack(int n,int weight[],int value[],int W){
    if(weight[n] <= W){
        //duita opion
        
    }
}
int main()
{
    int n;
    int weight[n],value[n];
    for(int i=0;i<n;i++)
        cin>>weight[i];
    for(int i=0;i<n;i++)
        cin>>value[i];
    int W;
    cin>>W;
    cout<<Knapsack(n-1,weight,value,W)<<endl;
    return 0;
}