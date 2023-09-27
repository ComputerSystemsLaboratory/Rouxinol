#include<iostream>
#include<algorithm>
using namespace std;
#define FOR(i, a, n) for(int i=a; i<n; i++)
#define RFOR(i, a, n) for(int i=n-1; i>=a; i--)
#define REP(i, n) FOR(i, 0, n)
#define RREP(i, n) RFOR(i, 0, n)

int main()
{
	int n, m;
	while (cin >> n >> m, n || m) {
		int taro[100], hanako[100];
		int staro = 0, shanako = 0;
		REP(i, n) {
			cin >> taro[i];
			staro += taro[i];
		}
		REP(i, m) {
			cin >> hanako[i];
			shanako += hanako[i];
		}

		int sum = staro + shanako;
		if ((sum % 2) == 1) {
			cout << -1 << endl;
			continue;
		}

		int t = -1, h = -1;
		int minv = 1000;
		int prod;
		(staro < shanako) ? prod = 1 : prod = -1;

		REP(i, n) {
			int val = prod * abs(sum / 2 - staro) + taro[i];
			REP(j, m) {
				if (val == hanako[j]) {
					if (taro[i] + hanako[j] < minv) {
						t = taro[i];
						h = hanako[j];
						minv = t + h;
					}
				}
			}
		}
		if (t == -1) cout << -1 << endl;
		else cout << t << " " << h << endl;
	}
	return 0;
}