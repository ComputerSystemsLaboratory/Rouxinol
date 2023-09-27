#include <bits/stdc++.h>
using namespace std;

const int maxv = 1005, maxe = 2005;

int md[maxv], pt[maxv];
int q[maxv], qh = 0, qt = 0;
bool inq[maxv];
vector<pair<int, int>> G[maxv];

bool empty() { return qh == qt; }

void push(int v) {
	if (inq[v]) return;
	inq[v] = true;
	q[qt] = v;
	qt++;
	if (qt >= maxv) qt -= maxv;
}

int pop() {
	int v = q[qh++];
	inq[v] = false;
	if (qh >= maxv) qh -= maxv;
	return v;
}

int main() {
	int v, e, r; cin >> v >> e >> r;
	
	for (int i = 0; i < e; i++) {
		int s, t, d; cin >> s >> t >> d;
		G[s].push_back({t, d});
		//G[t].push_back({s, d});
	}
	
	bool ok = true;
	fill(md, md + maxv, 0x3f3f3f3f);
	
	md[r] = 0;
	push(r);
	
	while (!empty()) {
		int t = pop();
		pt[t]++;
		if (pt[t] > maxe) {
			ok = false;
			break;
		}
		for (pair<int, int> p : G[t]) {
			if (md[t] + p.second < md[p.first]) {
				md[p.first] = md[t] + p.second;
				push(p.first);
			}
		}
	}
	
	if (!ok) {
		cout << "NEGATIVE CYCLE" << endl;
	} else {
		for (int i = 0; i < v; i++) {
			if (md[i] >= 0x3f3f3f3f) {
				cout << "INF" << endl;
			} else {
				cout << md[i] << endl;
			}
		}
	}
}
