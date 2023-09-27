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
		int x, y;
		int count = 0;
		int posx = 10;
		int posy = 10;
		int jwe[21][21] = {};
		int m;
		char d;
		int l;

		cin >> n;
		if (n == 0) {
			break;
		}
		FOR(i, 1, n) {
			cin >> x >> y;
			jwe[x][y]++;
		}
		cin >> m;
		FOR(i, 1, m) {
			cin >> d >> l;
			switch (d) {
			case 'N':
				FOR(t, 1, l) {
					posy++;
					if (jwe[posx][posy] > 0) {
						count++;
						jwe[posx][posy]--;
					}
				}
				break;
			case 'E':
				FOR(t, 1, l) {
					posx++;
					if (jwe[posx][posy] > 0) {
						count++;
						jwe[posx][posy]--;
					}
				}
				break;
			case 'S':
				FOR(t, 1, l) {
					posy--;
					if (jwe[posx][posy] > 0) {
						count++;
						jwe[posx][posy]--;
					}
				}
				break;
			case'W':
				FOR(t, 1, l) {
					posx--;
					if (jwe[posx][posy] > 0) {
						count++;
						jwe[posx][posy]--;
					}
				}
				break;
			}
		}
		if (n == count) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}

}
