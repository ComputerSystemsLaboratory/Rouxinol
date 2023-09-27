#include <bits/stdc++.h>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int main(void) {
	int n, m;
	bool flag = false;
	
	cin >> n;
	vector<string>u(n + 1);
	FOR(i, 1, n) {
		cin >> u[i];
	}
	cin >> m;
	vector<string>t(m + 1);
	FOR(i, 1, m) {
		cin >> t[i];
	}

	FOR(i, 1, m) {
		FOR(j, 1, n) {
			if (t[i] == u[j]) {
				if (flag==false) {
					cout << "Opened by ";
					flag = true;
				}
				else {
					cout << "Closed by ";
					flag = false;
				}
				
				cout << t[i] << endl;
				break;
			}
			if (j == n) {
				cout << "Unknown ";
				cout << t[i] << endl;
			}
		}
	}

	
}
