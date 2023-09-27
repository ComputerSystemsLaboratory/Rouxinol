# include <algorithm>
# include <cassert>
# include <cctype>
# include <cstdio>
# include <cstdlib>
# include <cstring>
# include <cmath>
# include <iostream>
# include <map>
# include <queue>
# include <set>
# include <sstream>
# include <stack>
# include <string>
# include <vector>
# include <iomanip>

# define rep(i, n) for (int i = 0; i < (int)(n); i++)
# define irep(i, n) for (int i = int(n) - 1; i >= 0; i--)
# define FOR(i, m, n) for (int i = int(m); i < (int)(n); i++)

using namespace std;
typedef long long ll;


// %% begin matrix %%

typedef vector<int> vec;
typedef vector<vec> mat;

void pretty_print(mat g) {
  rep (i, g.size()) {
    rep (j, g[0].size()-1) {
      cout << g[i][j] << ' ';
    }
    cout << g[i][g[0].size()-1] << endl;
  }
}


mat mul(mat A, mat B) {
  mat C(A.size(), vec(B.size()));
  rep (i, A.size()) {
    rep (k, B.size()) {
      rep (j, B[0].size()) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
  return C;
}

// %% end matrix %%

# define MAX_V 100000
# define MAX_E 500000

# define INF 1001001001

struct edge {int from, to, cost;};

int V, E;
vector<int> d(MAX_V);
edge es[MAX_E];


void bellman_ford(int s) {
  
  // NOTE : initialize
  rep (i, V) d[i] = INF;
  d[s] = 0;

  while (true) {
    bool update = false;

    rep (i, E) {
      edge e = es[i];

      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }

    if (!update) break;
  }
}



int main() {

  int s;
  cin >> V >> E >> s;

  rep (i, E) {
    int f, t, c;
    cin >> f >> t >> c;
    es[i].from = f;
    es[i].to = t;
    es[i].cost = c;
  }

  bellman_ford(s);

  rep (i, V) {
    if (d[i] == INF) {
      cout << "INF" << endl;
    }
    else {
      cout << d[i] << endl;
    }
  }
}