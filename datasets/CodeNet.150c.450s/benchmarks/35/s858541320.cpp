#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    while(1){
        vector<int>vec;
        int ans=-100000;
        cin>>n;
        vector<int>dp(n);
        if(n==0)break;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            vec.push_back(a);
        }
        dp[0]=vec[0];
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1]+vec[i],vec[i]);
        }
        for(int i=0;i<n;i++){
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}