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
	string str;
	int q;
	int a, b;
	string jud;
	string repl;
	string t, r;

	cin >> str;
	cin >> q;
	FOR(i, 1, q) {
		cin >> jud;
		cin >> a >> b;
		if (jud == "print") {
			t = str.substr(a, b-a+1);
			cout << t << endl;
		}
		else if (jud == "reverse") {
			t = str.substr(a, b-a+1);
			r = t;
			RFOR(u,t.size() - 1,0) {
				t[u] = r[t.size() - 1 - u];
			}
			str.replace(a, b-a+1, t);
		}
		else if (jud == "replace") {
			cin >> repl;
			str.replace(a, b-a+1, repl);
		}
	}

	
	
	return 0;
}

