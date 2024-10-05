#include<bits/stdc++.h>
using namespace std;
int n,m,sum = 0;
int a[20][20];
int dp[20][20];
bool valid(int i, int j){
    return (i>=0 && i<n && j>=0 && j<m);
}
int maxPathSum(int i,int j){
    if(!valid(i,j))
        return INT_MIN;
    if(i == n-1 && j == m-1)
        return a[i][j];
    if(dp[i][j] != -1) return dp[i][j];
    int rightSum = maxPathSum(i,j+1);
    int downSum = maxPathSum(i+1,j);
    dp[i][j] = a[i][j] + max(rightSum,downSum);
    return dp[i][j];
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    cout<<maxPathSum(0,0)<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //        cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}