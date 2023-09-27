#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  int n = 0, quantum = 0;
  fscanf(stdin, "%d %d", &n, &quantum);
  vector<string> names(n);
  vector<int> times(n, 0);
  queue<pair<int, int> > que;
  for (int i = 0; i < n; ++i) {
    cin >> names[i] >> times[i];
    que.push(make_pair(i, times[i]));
  }
  int now = 0;
  while (!que.empty()) {
    pair<int, int> p = que.front(); que.pop();
    if (p.second > quantum) {
      p.second -= quantum;
      que.push(p);
      now += quantum;
    }
    else {
      fprintf(stdout, "%s %d\n", names[p.first].c_str(), now + p.second);
      now += p.second;
    }
  }
  return 0;
}