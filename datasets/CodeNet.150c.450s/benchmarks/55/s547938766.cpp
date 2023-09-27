#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define rep(i,n) for(int i=0;i<(n);i++)
#define all(c) (c).begin(), (c).end()

const int INF=1e9;
const int MOD=1e9+7;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main() {
    string s;
    while(cin>>s, s!="0") {
        int ans=0;
        rep(i,s.size()) ans+=s[i]-'0';
        cout<<ans<<endl;
    }
    return 0;
}