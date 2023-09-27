#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

int main(){
    int n, m;
    while(cin >> n >> m, n||m){
        vector<pair<int, int>> v;
        rep(i,n){
            int a, b;
            cin >> a >> b;
            v.emplace_back(make_pair(b, a));
        }
        sort(all(v), greater<pair<int, int>>());

        long long ans = 0;
        rep(i,v.size()){
            if(m == 0){
                ans += v[i].first * v[i].second;
            }else if(v[i].second <= m){
                m -= v[i].second;
            }else if(v[i].second > m){
                v[i].second-=m;
                ans += v[i].first * v[i].second;
                m = 0;
            }
        }
        cout << ans << endl;
    }
}