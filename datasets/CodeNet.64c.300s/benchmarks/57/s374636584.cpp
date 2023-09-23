#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define REP(i,n) for(ll i=0;i<n;i++)

void dfs(int index);

int r, c, maxsnb;
int snb[10][10000];

int main() {

	while(true) {

		scanf("%d %d", &r, &c);

		if (r==0 && c==0) break;

		REP(i,r)REP(j,c) {
			scanf(" %d", &snb[i][j]);
		}

		maxsnb = 0;

		dfs(0);

		printf("%d\n", maxsnb);

	}

	return 0;
}

void dfs(int index) {
	if (index<r) {
		dfs(index+1);
		REP(i,c) {
			snb[index][i] = (snb[index][i]+1)%2;
		}
		dfs(index+1);
	} else {
		int total = 0;
		REP(i,c) {
			int total_ = 0;
			REP(j,r) {
				total_ += snb[j][i];
			}
			total += max(total_, r-total_);
		}
		maxsnb = max(maxsnb, total);
	}
}