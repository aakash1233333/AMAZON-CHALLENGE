//iterative approach or bottom up approach use of loop.
#include<iostream>
using namespace std;
int bottomUp(int n){
    int dp[10000];

    //initialize in bottom up case the base case are intialized 
    dp[0]=0;
    dp[1]=1;
    // use of loop 
    for (int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];//RECURRENCE RELATION NIKALANA HAI TO SHI BC
    }
    return dp[n];

} 

int main(){

    int n;
    cin >> n;

    int dp[1000];
    for (int i =0;i<=n;i++){
        dp[i]= -1;
    }
    cout<<bottomUp(n)<<endl;
    return 0;
}