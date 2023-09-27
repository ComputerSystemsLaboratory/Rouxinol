#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i,x) for(int i = 0; i < x; i++)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> ivec;
const ll N = 1e9+7;

int main(){
    string s1,s2;cin >> s1 >> s2;
    int olen = s1.size(),tlen = s2.size();
    int dp[1010][1010] = {};
    rep(i,olen+1){
        // if(!i)continue;
        rep(j,tlen+1){
            if(!i){
                dp[i][j] = j;
                continue;
            }
            if(!j){
                dp[i][j] = i;
                continue;
            }
            if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1])) + 1;
            }
        }
    }
    // rep(i,olen+1){
    //     rep(j,tlen+1){
    //         cout << dp[i][j];
    //     }
    //     cout << endl;
    // }
    cout << dp[olen][tlen] << endl;
    return 0;
}
