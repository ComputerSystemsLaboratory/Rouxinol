#include<bits/stdc++.h>
#define rep(i,f,n) for(ll i=(f); (i) < (n); i++)
#define repe(i,f,n) for(ll i=(f); (i) <= (n); i++)
using namespace std;
using ll = long long;
#define MOD (ll)1000000007
#define PI 3.14159265359
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";
#define P pair<ll, ll>
#define dvec vector<vector<ll>>
//printf("%.10f\n")
//cout << fixed << setprecision(10);
template<class T> inline bool chmax(T& a, T b){if (a < b) { a = b; return true; } return false;}
template<class T> inline bool chmin(T& a, T b){if (a > b) { a = b; return true; } return false;}
ll INF = 1e+18;
int iINF = 1e9;

int main()
{
  int N, M; cin >> N >> M;
  dvec G(N);
  rep(i, 0, M){
    int a, b; cin >> a >> b;
    --a, --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  vector<int> dist(N, -1);
  queue<int> q;
  q.push(0);
  dist[0] = 0;

  while(!q.empty()){
    int node = q.front();
    q.pop();
    for(int next: G[node]){
      if(dist[next] == -1) dist[next] = node, q.push(next);
    }
  }

  cout << "Yes" << endl;
  rep(i, 1, N) cout << dist[i] + 1 << endl;
}

