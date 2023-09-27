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

const int MAX_V = 100;
const int MAX_E = 9000;
long long int INF = INT32_MAX;
int n, m, a, b, c, t;
int k, p, q, r;
long long int wf[MAX_V][MAX_V];

int main()
{
	int cou = 0;
	bool heiro = false;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j){
			wf[i][j] = INF;
		}
	}
	for (int i = 0; i < n; ++i) {
		wf[i][i] = 0;
	}
	
	for (int i = 0; i < m; ++i) {
		scanf("%d %d %d", &a, &b, &c);
		wf[a][b] = c;
	}
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (wf[i][k] != INF && wf[k][j] != INF) {
					wf[i][j] = min(wf[i][j], wf[i][k] + wf[k][j]);
				}
			}
		}
	}
	for (int i = 0; i < n; ++i) {
		if (wf[i][i] != 0) {
			heiro = true;
			break;
		}
	}
	if (heiro == true) {
		printf("NEGATIVE CYCLE\n");
	}
	else {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (j != 0) { printf(" "); }
				if (wf[i][j] == INF) printf("INF");
				else printf("%lld", wf[i][j]);
			}
			printf("\n");
		}
	}
}