#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
#define rep(i,n) for(int i = 0;i < n;i++)
#define N 20005
using namespace std;
int main(){
    int Testcase;
    cin >> Testcase;
    while(Testcase--){
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length(),l2=s2.length();
        int dp[1005][1005];
        rep(i,l1+1){
            rep(j,l2+1){
                dp[i][j]=0;
            }
        }
        rep(i,l1){
            rep(j,l2){
                if(s1[i]==s2[j]){
                    dp[i+1][j+1]=dp[i][j]+1;
                }else{
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                }
            }
        }
        cout << dp[l1][l2]<<endl;
    }
}