#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll inf = 0x3f3f3f3f3f3f3f3f;
const int mx = 100005;

ll dist[mx];
vector<pair<ll, int> > adj[mx];
bitset<mx> inq;
int v, e, r;
int q[mx], qh, qt, ct = 0;

int qpop() {
  int v = q[qh++];
  if (qh > mx) qh = 0;
  return v;
}

void qpush(int v) {
  ct++;
  q[qt++] = v;
  if (qt > mx) qt = 0;
}

int main() {
  qh = qt = 0;
  cin >> v >> e >> r;
  for (int i = 0; i < v; i++)
    dist[i] = inf;
  for (int i = 0; i < e; i++) {
    int s, t, d; cin >> s >> t >> d;
    adj[s].push_back({ d, t });
  }
  dist[r] = 0;
  qpush(r);
  while (qh != qt) {
    if (ct > 2 * v * e + 5) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
    int p = qpop();
    inq[p] = false;
    for (auto h : adj[p]) {
      int t = h.second;
      ll d = h.first + dist[p];
      if (d < dist[t]) {
	dist[t] = d;
	if (!inq[t])
	  inq[t] = true, qpush(t);
      }
    }
  }
  for (int i = 0; i < v; i++) {
    if (dist[i] < inf / 2) cout << dist[i] << endl;
    else cout << "INF" << endl;
  }
}

