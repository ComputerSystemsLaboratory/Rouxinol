#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int main() {
	int n, u, k;
	cin >> n; 

	vector<vector<int>> mat(n, vector<int>(n, 0));
	rep(i, n) {
		cin >> u >> k; --u;	
		int v;
		rep(j, k) {
			cin >> v; --v;	
			mat[u][v] = 1;
		}
	}
	
	rep(i, n) {
		rep(j, n) {
			if(j == (n-1)) {
				cout << mat[i][j] << endl;
			} else {
				cout << mat[i][j] << " ";
			}	
		}
	}

	return 0;
}