#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
#include <cmath>
#include <bitset>
#include <map>

#define INF_LL 9000000000000000000
#define INF 2000000000

#define REP(i, n) for(int i = 0;i < (n);i++)
#define FOR(i, a, b) for(int i = (a);i < (b);i++)

using namespace std;

typedef long long ll;
typedef pair<int, int> PII;

class Union_find{
private:
	vector<int> par;
	vector<int> rank;
	int n;

public:
	Union_find(int a){
		n = a;
		for(int i = 0;i < n;i++){
			par.push_back(i);
			rank.push_back(0);
		}
	}

	int find(int x){
		if(par[x] == x){
			return x;
		}else{
			return par[x] = find(par[x]);
		}
	}

	void unite(int x, int y){
		x = find(x);
		y = find(y);
		if(x == y) return;

		if(rank[x] < rank[y]){
			par[x] = y;
		}else{
			par[y] = x;
			if(rank[x] == rank[y]) rank[x]++;
		}
	}

	bool same(int x, int y){
		return find(x) == find(y);
	}
};

int main(){
	ll a[100];
	ll dp[21][100];
	int N;
	cin >> N;
	REP(i, N){
		cin >> a[i];
	}
	REP(i, 21){
		REP(j,100){
			dp[i][j] = 0;
		}
	}
	dp[a[0]][0] = 1;
	FOR(i, 0, N-1){
		FOR(j, 0, 21){
			if(j-a[i+1] >= 0){
				dp[j-a[i+1]][i+1] += dp[j][i];
			}
			if(j+a[i+1] <=20){
				dp[j+a[i+1]][i+1] += dp[j][i];
			}
		}
	}

	cout << dp[a[N-1]][N-2] << endl;
}