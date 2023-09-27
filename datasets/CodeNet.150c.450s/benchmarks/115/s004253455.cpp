#include <iostream>
#include <algorithm>
#include <cstring>

#define rep(i,n) for(int i=0;i<(n);i++)

template<class T>
bool chmax(T &a, const T &b) {
    if(a<b) {
        a=b;
        return false;
    }
    return true;
}

using namespace std;

int dp[1003][1003];
int main() {
    int q; cin>>q;
    rep(_,q) {
        memset(dp,0,sizeof(dp));
        string s,t;
        cin>>s>>t;
        s=" "+s;
        t=" "+t;
        rep(i,s.size()){
            rep(j,t.size()) {
                if(i&&j) {
                    if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1]+1;
                    else {
                        chmax(dp[i][j],dp[i-1][j]);
                        chmax(dp[i][j],dp[i][j-1]);
                    }
                }
            }
            //rep(j,t.size()) cout<<dp[i][j]<<" ";
            //cout<<endl;
        }
        int ans=0;

        rep(i,s.size()) chmax(ans,*max_element(dp[i],dp[i]+t.size()));
        cout<<ans<<endl;
    }

    return 0;
}