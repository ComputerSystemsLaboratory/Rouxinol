#include <iostream>
#include <cstdio>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

int main() {
	int n;
	float x[4], y[4];
	bool flag;
	cin >> n;
	REP(i,n) {
		flag = true;
		REP(j,4)
			cin >> x[j] >> y[j];
		REP(j,2) {
			if (x[(j*2+1)%4] == x[(j*2)%4] && x[((j+1)*2+1)%4] != x[((j+1)*2)%4])
				flag = false;
			if (y[(j*2+1)%4] == y[(j*2)%4] && y[((j+1)*2+1)%4] != y[((j+1)*2)%4])
				flag = false;
		}
		if (flag && !(x[1] == x[0] && x[3] == x[2] || y[1] == y[0] && y[3] == y[2])) {
			if ((y[1]-y[0])/(x[1]-x[0]) != (y[3]-y[2])/(x[3]-x[2]))
				flag = false;
		}

		if (flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}