#include<bits/stdc++.h>//mcm try karke dekhna matrix 
using namespace std;
int totalSmoke(vector<int> &A,int L, int R)
{
    for(int k=L;k<=R-1;k++)//we will possible partition l.....R-1
    {
        ans=min(ans,sum(L,k)*sum(k+1,R)+totalSmoke(L,k)+totalSmoke(k+1,R));


    }
    return ans;
}






int main()
{
    int n;cin>>n;
    vector<int>A(n);



    return 0;
}