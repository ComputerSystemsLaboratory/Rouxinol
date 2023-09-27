#include<bits/stdc++.h>
#define INF 2000000000
#define int long long int
#define MOD 1000000007
#define pb push_back
#define cin1(n) (cin >> n)
#define cin2(a,b) (cin >> a >> b)
#define cin3(a,b,c) (cin >> a >> b >> c)
#define cout(n) (cout << n << endl)
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define fr first 
#define sc second 
#define EPS (1e-10)

using namespace std;

typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<pair<int,int>> vpii;
typedef vector<string> vs;
typedef vector<vector<string>> vss;
typedef pair<int,int> pii;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int n,m;
int a,b;
int p,q;


void printv(vvi v){
	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < v.size(); j++){
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return ;
}


signed main() {
	
	cin1(n);

	vi p(n+2);
	rep(i,1,n+1) {
		cin2(p[i-1],p[i]);
	}

	
	vvi dp(n,vi(n,0));
	for (int i = 2; i <= n; i++) { //???????????°
		for (int j = 0; j < n - i + 1; j++) { //??´???(??????)
			dp[j][j+i-1] = INF;
			for (int k = j; k < j + i - 1; k++ ) { //?????????
				dp[j][j+i-1] = min(dp[j][j+i-1],dp[j][k] + dp[k+1][j+i-1] + p[j] * p[k+1] * p[j+i]);
			}
		}
	}
	//printv(dp);
	cout(dp[0][n-1]);
		
	return 0;
}