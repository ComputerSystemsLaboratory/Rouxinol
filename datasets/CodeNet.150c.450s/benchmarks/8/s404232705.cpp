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
	int left = 0, right = 0;
	string s, t;

	cin >> n;
	FOR(i, 1, n) {
		cin >> s >> t;
		if (s < t) {
			right += 3;
		}
		else if (s > t) {
			left += 3;
		}
		else {
			right++;
			left++;
		}
	}
	cout << left << " " << right << endl;

	
	
	return 0;
}

