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
	while (1) {
		int n;
		int count = 0;
		bool left = false;
		bool right = false;
		bool first = false;

		cin >> n;
		if (n == 0) {
			break;
		}
		vector<string>f(n + 1);
		FOR(i, 1, n) {
			cin >> f[i];
		}
		FOR(i, 1, n) {
			if (f[i] == "lu") {
				left = true;
			}
			else if (f[i] == "ld") {
				left = false;
			}
			else if (f[i] == "ru") {
				right = true;
			}
			else if (f[i] == "rd") {
				right = false;
			}
			if (first == false) {
				if (left == true && right == true) {
					count++;
					first = true;
				}
			}
			else {
				if (left == false && right == false) {
					count++;
					first = false;
				}
			}
		}
		cout << count << endl;
	}
}
