#include <bits/stdc++.h>
using namespace std;

//type
#define ll long long
typedef pair<int, int> P;
//定数
#define INF 1000000000000 //10^12:∞
#define MOD 1000000007    //10^9+7:合同式の法
#define MAXR 100000       //10^5:配列の最大のrange
//略記
#define PB push_back //挿入
#define MP make_pair //pairのコンストラクタ
#define F first      //pairの一つ目の要素
#define S second     //pairの二つ目の要素
#define Z class
// OTHER
// xの二乗を返す (関数テンプレート版)
template <typename T>
T square(T x) { return x * x; }
#define chmax(x, y) (x = max(x, y))
#define chmin(x, y) (x = min(x, y))
// loop
#define REP(i, n) for (ll i = 0; i < ll(n); i++)
#define REPD(i, n) for (ll i = n - 1; i >= 0; i--)
#define FOR(i, a, b) for (ll i = a; i <= ll(b); i++)
#define FORD(i, a, b) for (ll i = a; i >= ll(b); i--)
#define FORA(i, I) for (const auto &i : I)

// vector
#define ALL(x) x.begin(), x.end()

// output
#define YES() printf("YES\n")
#define NO() printf("NO\n")
#define isYES(x) printf("%s\n", (x) ? "YES" : "NO")
#define Yes() printf("Yes\n")
#define No() printf("No\n")
#define ln cout << '\n'
template <Z A>
void pr(A a)
{
  cout << a;
  ln;
}
template <Z A, Z B>
void pr(A a, B b)
{
  cout << a << ' ';
  pr(b);
}

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

using Graph = vector<vector<int>>;
int N, M;
Graph G;

void solve()
{
  vector<int> dist(N, -1);
  // prev[ v ] が、頂点 v の親 | prev[ v ] := 始点 s から頂点 v への最短路において、v の手前の頂点
  vector<int> prev(N, -1);
  queue<int> que;
  que.push(0);
  dist[0] = 0;
  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    for (auto nv : G[v])
    {
      if (dist[nv] == -1)
      {
        dist[nv] = dist[v] + 1;
        prev[nv] = v;
        que.push(nv);
      }
    }
  }
  cout << "Yes" << endl;
  for (int i = 1; i < N; ++i)
    cout << prev[i] + 1 << endl;
}

int main()
{
  // input 
  cin >> N >> M;
  G.assign(N, vector<int>());
  for (int i = 0; i < M; ++i)
  {
    int a, b;
    cin >> a >> b;
    --a, --b;
    G[a].push_back(b);
    G[b].push_back(a);
  }
  // bfs
  solve();
}