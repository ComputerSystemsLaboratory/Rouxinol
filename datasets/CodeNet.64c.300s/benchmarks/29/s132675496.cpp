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
		int e;
		bool flag = true;
		int mini = INF;

		cin >> e;
		if (e == 0) {
			break;
		}
		RFOR(z, cbrt(e)+1, 0) {
			if (pow(z, 3) > e) {
				continue;
			}
			RFOR(y, sqrt(e-pow(z,3))+1, 0) {
				if (pow(y, 2) > e - pow(z, 3)) {
					continue;
				}
				
					if (mini > z + y + e - pow(z, 3) - pow(y, 2)) {
						mini = z + y + e - pow(z, 3) - pow(y, 2);
					}
					break;
				
			}
		}
		cout << mini << endl;
	}

}
