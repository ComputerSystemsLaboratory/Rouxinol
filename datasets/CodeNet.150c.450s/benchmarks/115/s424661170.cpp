

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
typedef long long ll;
int mod(ll a){
    int c=a%1000000007;
    if(c>=0)return c;
    else return c+1000000007;
}
typedef pair<int,int> i_i;


int main(){
    int q;cin>>q;
    while(q){
        char s[1005],t[1005];cin>>s>>t;
        ll ls=strlen(s),lt=strlen(t);
        for(ll i=ls-1;i>=0;i--)s[i+1]=s[i];
        for(ll j=lt-1;j>=0;j--)t[j+1]=t[j];
        int dp[ls+1][lt+1];
        for(int i=0;i<=ls;i++)dp[i][0]=0;
        for(int j=0;j<=lt;j++)dp[0][j]=0;
        for(int i=1;i<=ls;i++){
            for(int j=1;j<=lt;j++){
                if(s[i]==t[j])dp[i][j]=dp[i-1][j-1]+1;
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[ls][lt]<<endl;
        q--;
    }
    
    return 0;
}






