#include<iostream>
#include<climits>
#include<vector>   //question was to make 1 in minimum steps the conditions were that it can be divided by 3,2 and -1.
using namespace std;

int maxN=1e5; //1e5=10 ki power 5
vector<int> dp(maxN+1,-1);
int minSteps(int n) // what is min no. of steps from N to 1
{
    if(n==1)//base case 
    {
        return 0;
    }

    if(dp[n]!=-1) //dyanmic programming array 
    {
        return dp[n];
    }

    int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
    if(n%3==0) // all three cases that are divided by 3.
    {
        op1=1 + minSteps(n/3);
    }
    if(n%2==0)  // second case that is divided by 2.
    {
        op2=1 + minSteps(n/2);
    }

    op3=1 + minSteps(n-1);  // third case that is -1 can be there .

    return dp[n]=min(min(op1,op2),op3);// returning minimum from op 1,2,3 becoz it is saying minimum steps required.
}

int main()
{
    int n; cin>>n;
    cout<<minSteps(n);

    vector<int> MIN_STEPS(n+1);
    // BASE CASE
    MIN_STEPS[1]=0;

    for(int i=2;i<=n;i++)
    {   
        int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
        if(i%3==0)
        {
            op1= 1 + MIN_STEPS[i/3];
        }
        if(i%2==0)
        {
            op2=1 + MIN_STEPS[i/2];
        }
        op3=1+MIN_STEPS[i-1];
        MIN_STEPS[i]=min(min(op1,op2),op3);
    }




    return 0;
}