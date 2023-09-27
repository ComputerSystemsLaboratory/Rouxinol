#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
const int INF = 1e9;
const double PI = acos(-1.0);

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	string W;
	cin >> W;
	transform(W.begin(), W.end(), W.begin(), ::toupper);

	int count = 0;
	string T;
	while(cin >> T) {
		if(T == "END_OF_TEXT") break;
		transform(T.begin(), T.end(), T.begin(), ::toupper);
		if(T == W) count++;
	}

	cout << count << "\n";

	return 0;
}