#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
const ll INF=1LL<<60;
const int inf=1<<30;
const int mod=1e9+7;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    while(cin >> n >> m){
        if(n==0&&m==0){
            return 0;
        }
        vector<int> h(n),w(m),sh(n+1),sw(m+1);
        for(int i=0;i<n;i++){
            cin >> h[i];
            sh[i+1]=sh[i]+h[i];
        }
        for(int i=0;i<m;i++){
            cin >> w[i];
            sw[i+1]=sw[i]+w[i];
        }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<=n;j++){
                mp[sh[j]-sh[i]]++;
            }
        }
        ll ans=0;
        for(int i=0;i<m;i++){
            for(int j=i+1;j<=m;j++){
                ans+=mp[sw[j]-sw[i]];
            }
        }
        cout << ans << endl;
    }
}
