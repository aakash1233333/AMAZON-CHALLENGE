
// 0-1 knap[sack using recursion]
#include<iostream>
using namespace std;
int max(int a,int b){return ( a >b)? a:b;} //in dp using recursion a terenary operator is called always 
int knapSack(int W,int wt[],int val[],int n)
//weight W allowed
//wt is the weight of profit
//val is the total value that can be put
//n is the maximum profit
{
    //base case
    if(n==0 || W==0)
    return 0;
    //if the weight og nth item
    //is more than the knapsack capacity W
    //this item cannot be included 
    //in the optimal solution
    if(wt[n-1] > W)
     return knapSack(W,wt,val,n-1);
     // weight ka case hogya 

     //items ka case which states
     //whether the item will be included
     //whether the item will not be included
     //nth item included
     //nth item not included
     else
      return max(
         val[n - 1]
                + knapSack(W - wt[n - 1], wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
    
int main()
{

    int dp[n+1][W+1]={0};
    dp[0][0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(wt[i-1] > w) dp[i][w]=dp[i-1][w];
            else dp[i][w]=max(val[i-1] + dp[i-1][w-wt[i-1]],dp[i-1][w]);
        }
    }
    cout<<dp[n][W];
    return 0;
}