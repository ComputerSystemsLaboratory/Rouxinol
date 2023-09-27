#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<cmath>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

#define REP(i,n) for(int i=0;(i)<(n);(i)++)
#define ll long long

static const int INFTY = (1 << 25);

int G[100][100], n;

int makeMST() {
	bool mask[100][100];//MAST????????¨???????????¨???????????¨?????????1
	REP(i, n) {
		REP(j, n) mask[i][j] = 0;
	}

	bool color[100];//MST?????\??£??????1
	REP(i, n) color[i] = 0;

	color[0] = 1;//?????????????????¨??????0?????\??????

	REP(k, n - 1) {
		int minv = INFTY;
		int mNodej = -1;
		int mNodei = -1;
		REP(i, n) {
			if (color[i] == 1) {
				REP(j, n) {
					if (G[i][j] != -1) {
						if (color[j] == 0) {
							if (G[i][j] < minv) {
								minv = G[i][j];
								mNodei = i;
								mNodej = j;
							}
						}
					}
				}
			}
		}
		mask[mNodei][mNodej] = 1;
		mask[mNodej][mNodei] = 1;
		color[mNodej] = 1;
	}

	REP(i, n) {
		REP(j, n) {
			if (mask[i][j] == 0) G[i][j] = -1;
		}
	}

	int ans = 0;
	REP(i, n) {
		REP(j, n) {
			if (G[i][j] != -1) ans += G[i][j];
		}
	}

	return ans / 2;
}

int main() {
	cin >> n;

	REP(i, n) {
		REP(j, n) G[i][j] = INFTY;
	}
	REP(i, n) {
		REP(j, n) cin >> G[i][j];
	}

	cout << makeMST() << endl;


	return 0;
}