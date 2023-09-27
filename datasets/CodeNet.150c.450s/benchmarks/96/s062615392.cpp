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
	int n;
	string s;

	cin >> n;
	FOR(i, 1, n) {
		cin >> s;
		int count = 0;
		int now = 0;
		FOR(t, 0, s.size() - 1) {
			if (s[t] == '0') {
				if (now == 1) {
					switch (count % 5) {
					case 0:
						cout << " ";
						break;
					case 1:
						cout << ".";
						break;
					case 2:
						cout << ",";
						break;
					case 3:
						cout << "!";
						break;
					case 4:
						cout << "?";
						break;
					}
				}
				else if (now == 7) {
					switch (count % 4) {
					case 0:
						cout << "s";
						break;
					case 1:
						cout << "p";
						break;
					case 2:
						cout << "q";
						break;
					case 3:
						cout << "r";
						break;
					}
				}
				else if (now == 9) {
					switch (count % 4) {
					case 0:
						cout << "z";
						break;
					case 1:
						cout << "w";
						break;
					case 2:
						cout << "x";
						break;
					case 3:
						cout << "y";
						break;
					}
				}
				else if (now == 2) {
					switch (count % 3) {
					case 0:
						cout << "c";
						break;
					case 1:
						cout << "a";
						break;
					case 2:
						cout << "b";
						break;
					}
				}
				else if (now == 3) {
					switch (count % 3) {
					case 0:
						cout << "f";
						break;
					case 1:
						cout << "d";
						break;
					case 2:
						cout << "e";
						break;
					}
				}
				else if (now == 4) {
					switch (count % 3) {
					case 0:
						cout << "i";
						break;
					case 1:
						cout << "g";
						break;
					case 2:
						cout << "h";
						break;
					}
				}
				else if (now == 5) {
					switch (count % 3) {
					case 0:
						cout << "l";
						break;
					case 1:
						cout << "j";
						break;
					case 2:
						cout << "k";
						break;
					}
				}
				else if (now == 6) {
					switch (count % 3) {
					case 0:
						cout << "o";
						break;
					case 1:
						cout << "m";
						break;
					case 2:
						cout << "n";
						break;
					}
				}
				else if (now == 8) {
					switch (count % 3) {
					case 0:
						cout << "v";
						break;
					case 1:
						cout << "t";
						break;
					case 2:
						cout << "u";
						break;
					}
				}

				now = 0;
				count = 0;
			}
			else {
				now = s[t] - '0';
				count++;
			}
		}
		cout << endl;
	}
}
