//me apna code likungaa 
//iterative approach likhne ki koshish KAREE 
#include<iostream>
using namespace std;
int bottomUp(int n){
    int dp[n]=1000;
    //intialize 
    dp[n]=0;
    return INT_MAX;
    //USE OF LOOP
    for (int i = 1; i <n; i++)
    {
        /* code */
        dp[i]=

    }
    


    
    
    }






















#include <bits/stdc++.h>
using namespace std;
 
int min(int x, int y) 
{ return (x < y) ? x : y; } // ? : is a ternanry operator who works as a if else condtion if condition is true, expression1 is executed.
//And, if condition is false, expression2 is executed.
 
// Returns minimum number of jumps
// to reach arr[n-1] from arr[0]
int minJumps(int arr[], int n)
{
    // jumps[n-1] will hold the result
    int* jumps = new int[n];
    int i, j;
 
    if (n == 0 || arr[0] == 0)
        return INT_MAX;
 
    jumps[0] = 0;
 
    // Find the minimum number of jumps to reach arr[i]
    // from arr[0], and assign this value to jumps[i]
    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }
    return jumps[n - 1];
}
 
// Driver code
int main()
{
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int size = sizeof(arr) / sizeof(int);
    cout << "Minimum number of jumps to reach end is "
         << minJumps(arr, size);
    return 0;
}




