#include<stdio.h>
#include<algorithm>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <functional>
#include <time.h>
using namespace std;
clock_t fi, endtime;
const int r_c = 0;
const int r_t = 1;
const int MAX_V = 100000;
const int MAX_d = 100000;
const int MAX_E = 500000;
long long int INF = 10000 * 50000;

int n, m, a, b, c, t;
int k, p, q, r;
long long int wf[MAX_V];

struct edge { int from, to, ct; };
edge edg[MAX_E];

int main()
{
	int cou = 0;
	scanf("%d %d %d", &n, &m, &r);
	for (int i = 0; i < m; ++i) {
		scanf("%d %d %d", &a, &b, &c);
		edg[i].from = a; edg[i].to = b; edg[i].ct = c;
	}
	for (int i = 0; i < n; ++i) {
		wf[i] = INF;
	}
	wf[r] = 0;
	while (1) {
		bool bo = false;
		for (int i = 0; i < m; ++i) {
			edge e = edg[i];
			if (wf[e.from] != INF && wf[e.to] > wf[e.from] + e.ct) {
				wf[e.to] = wf[e.from] + e.ct;
				bo = true;
			}
		}
		if (!bo) break;
		++cou;
		if (cou > n) break;
	}
	if (cou > n) printf("NEGATIVE CYCLE\n");
	else {
		for (int i = 0; i < n; ++i) {
			if (wf[i] == INF) printf("INF\n");
			else printf("%lld\n", wf[i]);
		}
	}
}