#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define repr(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) for(int i=0;i<n;i++)
#define invrepr(i,a,b) for(int i=b-1;i>=a;i--)
#define invrep(i,n) invrepr(i,0,n)
#define repitr(itr,a) for(auto itr=a.begin();itr!=a.end();++itr)
#define P pair<int,int>
const int MOD=1e9+7;
const int INF=2e9;

int stoti(string s) {
    int res=0;
    rep(i,s.size()) {
        if (s[i]==':') continue;
        else {
            res*=10;
            res+=s[i]-'0';
        }
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);

    while (1) {
        int n;
        cin >> n;
        if (n==0) break;
        vector<P> p;
        rep(i,n) {
            string s,t;
            cin >> s >> t;
            p.push_back(make_pair(stoti(s),1));
            p.push_back(make_pair(stoti(t),-1));
        }
        sort(p.begin(),p.end());
        vector<int> a(2*n+1);
        int ans=0;
        rep(i,2*n) {
            a[i+1]=p[i].second;
            a[i+1]+=a[i];
            ans=max(ans,a[i+1]);
        }
        cout << ans << endl;
    }

    return 0;   
}

