#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int, int>;
using PLL = pair<ll, ll>;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define repn(i,n) for(int i = 0; i <= (int)(n); i++)
#define srep(i,l,n) for(int i = l; i < (int)(n); i++)
#define srepn(i,l,n) for(int i = l; i <= (int)(n); i++)
#define drep(i,n) for(int i = (int)(n-1); i >= 0; i--)
#define drepn(i,n) for(int i = (int)(n); i >= 0; i--)
#define size(s) (int)s.size()
#define debug(var)  do{std::cout << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cout << e << " "; } std::cout << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
template<typename T> inline istream& operator>>(istream &i, vector<T> &v) {rep(j, size(v)) i >> v[j]; return i;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
template<class T> T gcd(T a, T b) {if(b==0)return a; else return gcd(b,a%b);}
template<class T> T lcm(T a, T b) {return a/gcd(a,b)*b;}
template<class T = int> using V = vector<T>;
template<class T = int> using VV = vector<V<T>>;
bool isIn(int i, int j, int h, int w) {return i >= 0 && i < h && j >= 0 && j < w;}
void Yes(){cout << "Yes" << endl;}
void No(){cout << "No" << endl;}
void YES(){cout << "YES" << endl;}
void NO(){cout << "NO" << endl;}
void err() {cout << -1 << endl;}
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define ep emplace_back

const int MOD = 1000000007;
const ll INF = 1e18;

#define PI acos(-1);
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int ddx[8] = {1,1,1,-1,-1,-1,0,0};
int ddy[8] = {0,1,-1,0,1,-1,1,-1};

const int mxV = 1e5 + 8;
ll dist[mxV];
vector<pair<int, int>> adj[mxV];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, r;
    cin >> n >> m >> r;
    rep(i, m) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(b, c));
    }
    fill(dist, dist + mxV, INF);
    dist[r] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    Q.push(make_pair(0, r));
    while(!Q.empty()) {
        pair<int, int> p = Q.top();
        Q.pop();
        int dis = p.first;
        int v = p.second;
        if(dist[v] < dis) continue;

        for(auto u : adj[v]) {
            if(chmin(dist[u.first], dist[v] + u.second)) {
                Q.push(make_pair(dist[u.first], u.first));
            }
        }
    }
    rep(i, n) {
        if(dist[i] == INF) cout << "INF" << endl;
        else cout << dist[i] << endl;
    }
}
