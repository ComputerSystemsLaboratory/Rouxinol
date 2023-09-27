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
	string s;
	string t;
	int count = 0;

	cin >> s;
	while (1) {
		cin >> t;
		if (t == "END_OF_TEXT") {
			break;
		}else{
			transform(t.begin(), t.end(), t.begin(), ::tolower);
			if (s == t) {
				count++;
			}
		}

	}

	cout << count << endl;


	
	return 0;
}

