
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


int MAX = 1000000;

signed main() {

	vi dp(MAX,MAX); // iテ」ツ?ョテヲツュツ」テ・ツ崢崚ゥツ敖「テ、ツスツ禿」ツ?ョテヲツ慊?・ツーツ湘・ツ?凝ヲツ閉ー
	vi dpo(MAX,MAX);

	dp[0] = 0;
	dpo[0] = 0;
	for (int i = 0;; i++) {
		int polo = i * (i + 1) * (i + 2) / 6;
		if (polo > MAX) break;
		for (int j = polo; j < MAX; j++) {
			dp[j] = min(dp[j],dp[j-polo] + 1);
		}
		if (polo % 2 == 1) {
		for (int j = polo; j < MAX; j++) {
			dpo[j] = min(dpo[j],dpo[j-polo] + 1);
		}
		}
	}

	while(1) {
		cin1(n);
		if (n == 0) break;
		cout << dp[n] << " " << dpo[n] << endl;
	}
	return 0;
}