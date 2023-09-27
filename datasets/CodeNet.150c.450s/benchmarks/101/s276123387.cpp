#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

vector<vector<int> > g;
vector<int> ids;

void rec(int v, int id)
{
  //fprintf(stderr, "DEBUG: v=%d, id=%d\n", v, id);
  int n = g[v].size();
  ids[v] = id;
  for (int i = 0; i < n; ++i) {
    if (ids[g[v][i]] == -1) {
      rec(g[v][i], id);
    }
  }
}

int main()
{
  int n, m;
  fscanf(stdin, "%d %d", &n, &m);
  g = vector<vector<int> >(n);
  ids = vector<int>(n, -1);
  for (int i = 0; i < m; ++i) {
    int s, t;
    fscanf(stdin, "%d %d", &s, &t);
    g[s].push_back(t);
    g[t].push_back(s);
  }
  int id = 0;
  for (int i = 0; i < n; ++i) {
    if (ids[i] == -1) {
      rec(i, id);
      ++id;
    }
  }
  int q;
  fscanf(stdin, "%d", &q);
  // fprintf(stderr, "DEBUG: ");
  // copy(ids.begin(), ids.end(), ostream_iterator<int>(cerr, ", "));
  // fprintf(stderr, "\n");
  for (int i = 0; i < q; ++i) {
    int s, t;
    fscanf(stdin, "%d %d", &s, &t);
    fprintf(stdout, "%s\n", ids[s] == ids[t] ? "yes" : "no");
  }
  return 0;
}