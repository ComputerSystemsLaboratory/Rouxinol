#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define st first
#define nd second
#define endl '\n'
#define what_is(x) cerr << #x << " is " << x << endl;
#define what_is_v(x) cerr << #x << " is "; for(auto&e: (x)) cerr << e << ' '; cerr << '\n'; //vector, set
#define what_is_a(x, n) cerr << #x << " is "; for(int i=0;i<n;i++) cerr << x[i] << ' '; cerr <<  '\n'; //n first element of array
#define cerr_pair(x) '{' << x.st << ", " << x.nd << '}'
#define pwhat_is(x) cerr << #x << " is " << cerr_pair(x) << endl;
#define pwhat_is_v(x) cerr << #x << " is "; for(auto&e: (x)) cerr << cerr_pair(e) << ' '; cerr << '\n'; //vector, set
#define pwhat_is_a(x, n) cerr << #x << " is "; for(int i=0;i<n;i++) cerr << cerr_pair(x[i]) << ' '; cerr <<  '\n'; //n first element of array
// #define int long long
// #define pow mypow

typedef pair<int,int> pii;
const int N = 1e5+5;
const int INF = 1e9+5;
const int MOD = 1e9+7;

int n, cnt[N];
long long sum = 0LL;
int32_t main()
{
	IOS
	// freopen("input.txt", "r", stdin);
	cin >> n;
	for(int i=0; i<n; i++) {
		int a; cin >> a;
		cnt[a]++;
		sum += a;
	}
	int q; cin >> q;
	while(q--){
		int b, c; cin >> b >> c;
		sum += 1LL*(c-b)*cnt[b];
		cout << sum << endl;
		cnt[c] += cnt[b];
		cnt[b] = 0;
	}
	
	return 0;
}
