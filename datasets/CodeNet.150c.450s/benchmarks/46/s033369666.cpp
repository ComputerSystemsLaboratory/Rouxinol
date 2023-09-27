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

	while(1) {
		int count = 0;
		int n, x;
		cin >> n >> x;
	
		if(n == 0 && x == 0) break;
		
		vector<int> v;
		FOR(i, 1, n + 1) v.push_back(i);
		
		FOR(i, 1, n + 1) {
			FOR(j, i + 1, n + 1) {
				if(binary_search(v.begin() + j, v.end(), x - i - j)) count++;
			}
		}
		
		cout << count << "\n";
	}
			
	return 0;
}