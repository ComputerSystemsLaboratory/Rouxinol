#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<algorithm>
#include<stack>
#include<map>
#include<set>
#define INF 2147483647
#define lli long long int

using namespace std;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vpii;

void printv(vector<double> v){
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
		}cout << endl;
		return ;
		}

void swap(double &a,double &b){
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	while(1){
		int n,m; cin >> n >> m;
		if (n + m == 0) break;

		vpii dp(n);
		for (int i = 0; i < n; i++){
			int d,p; cin >> d >> p;
			dp[i] = make_pair(p,d);
		}

		sort(dp.begin(),dp.end());
		reverse(dp.begin(),dp.end());
		
		int ans = 0;
		for (int i = 0; i < n ; i++){
			if (m >= dp[i].second){
				m -= dp[i].second;
			}else{
				dp[i].second -= m;
				m = 0;
				ans += dp[i].first * dp[i].second;
			}
		}
		cout << ans << endl;
		
	}
	return 0;
}