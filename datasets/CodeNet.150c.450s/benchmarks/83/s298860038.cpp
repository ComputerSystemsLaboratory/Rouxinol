#include<bits/stdc++.h>
#define INF 2147483647
#define lli long long int
#define MOD 1000000007
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

int main() {
	
	int n,w; cin >> n >> w;
	vvi table(n+10,vi(w+10,0));

	vi val(n,0);
	vi wei(n,0);
	for (int i = 0; i < n; i++) {
		cin >> val[i] >> wei[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= w; j++) {
			if(j < wei[i]) {
				table[i+1][j] = table[i][j];
			}else{
				table[i+1][j] = max(table[i][j],table[i][j-wei[i]] + val[i]);
			}
		}
	}
	
	cout << table[n][w] << endl;

	return 0;
}