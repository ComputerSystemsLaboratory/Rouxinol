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
		string s;
		string t;
		int m;
		int h[101];

		cin >> s;
		if (s == "-") {
			break;
		}
		cin >> m;
		FOR(i, 1, m) {
			cin >> h[i];
			t = s.substr(0, h[i]);
			s.erase(0, h[i]);
			s += t;
		}

		cout << s << endl;
	}
	
	
	return 0;
}

