int Knapsack(int W,int n, vector<int> &v,vector<int> &w,vector<vector<int>>&dp){
    //base case in which items aur weight 0 hoga
    if(n==0||W==0)
    return 0;

    //jisme dp ko aise value par lkar jate hai jispar wo kaam nhi karega
    if(dp[n][W]!=-1)
     return dp[n][W];


     if(w[n] <=W){
        return dp[n][W]=max(v[n]+knapsack(W-w[N],))
         /* if weight of current element is less than or equal to capacity we can 
    either include or exclude the item and store it to DP. */
    if(w[N] <= W){
         return dp[N][W] = max(v[N]+knapSackrecur(W-w[N],N-1,v,w,dp),knapSackrecur(W,N-1,v,w,dp));
    }
    /* if weight of current element is greater than the capacity we will
    not include it thus returning just the ignoring part and storing it to DP. */
    return dp[N][W] = knapSackrecur(W,N-1,v,w,dp);
}
int knapsack01(int W,int N,vector<int> &v,vector<int> &w) {
    // Defining Dp and initializing with -1.
    vector<vector<int>> dp(N+1,vector<int> (W+1,-1)); 
    return knapsack(W,N-1,v,w,dp);
}
     
}