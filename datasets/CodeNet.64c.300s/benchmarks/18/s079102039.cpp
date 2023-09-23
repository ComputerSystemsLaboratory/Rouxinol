#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int dp[31]={1,1,2,4};
        int n;
        cin>>n;if(!n)return 0;
        for(int i=4;i<=n;++i){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        cout<<((dp[n]-1)/3650)+1<<endl;
    }
}