#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<cstring>
#define p pair<int,int>
#define P pair<int,p>
using namespace std;

vector<P>s;
int Par[100], Rank[100];
int find(int a) {
	if (Par[a] == a)return a;
	return Par[a] = find(Par[a]);
}
void unite(int a, int b) {
	a = find(a); b = find(b);
	if (Rank[a] > Rank[b]) {
		Par[b] = a;
	}
	else if (Rank[a] < Rank[b]) {
		Par[a] = b;
	}
	else {
		Rank[a]++;
		Par[b] = a;
	}
}
signed main() {
	int a; cin >> a;
	for (int b = 0; b < a; b++)Par[b] = b;
	for (int b = 0; b < a; b++) {
		for (int c = 0; c < a; c++) {
			int d; scanf("%d", &d);
			if (d != -1 && b <= c) {
				s.push_back(P(d,p(b,c)));
			}
		}
	}
	sort(s.begin(), s.end());
	int cost = 0;
	for (P i : s) {
		if (find(i.second.first) != find(i.second.second)) {
			cost += i.first;
			unite(i.second.first, i.second.second);
		}
	}
	cout << cost << endl;
}