#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;

int main(int argc, char *argv[]) {

	int D; cin >> D;

	vector<int> c(26,0);
	vector<vector<int>> s(D,vector<int>(26,0));
	vector<int> t(D,0);
	vector<int> last(26,0);

	for (int i = 0; i < 26; i++) {
		cin >> c[i];
	}

	for (int i = 0; i < D; i++) {
		for (int j = 0; j < 26; j++) {
			cin >> s[i][j];	
		}
	}

	for (int i = 0; i < D; i++) {
		cin >> t[i];
	}

	
	int ans = 0;
	for (int i = 0; i < D; i++) {
		ans += s[i][t[i]-1];	
		last[t[i]-1] = i+1;
		for (int j = 0; j < 26; j++) {
			ans -=	c[j] * ((i+1) - last[j]) ;
		}
		cout << ans << endl;
	}




	return 0;
}
