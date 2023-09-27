#include<bits/stdc++.h>
#define MOD 1000000007
#define allof(a) (a).begin(),(a).end()
using namespace std;

/*
const double EPS = 1e-9;
const int INF = 1L << 30;
vector<int> dx = {0,1,0,-1};
const int dy[4] = {-1,0,1,0};

bool in_range(int x, int lb, int ub) {return lb <= x and x < ub;}
bool in_range(int x, int y, int W, int H) {return in_range(x,0,W) and in_range(y,0,H);}
void modAdd(int &a, int b, int mod) {a = (a + b) % MOD;}
template <typename T> void maxUpdate(T& a, T b){a = max(a,b);}
*/
int main() {
	
	while(1) {
	int n,m; cin >> n >> m;
	if (n + m == 0) {
		break;
	}

	vector<int> h(n+1);
	vector<int> w(m+1);
	vector<int> h_cnt(1000000);
	vector<int> w_cnt(1000000);

	int sum = 0;
	h[0] = 0;
	for (int i = 1; i <= n; i++) {
		int num; cin >> num;
		sum += num;
		h[i] = sum;
	}

	sum = 0;
	w[0] = 0;
	for (int i = 1; i <= m; i++) {
		int num; cin >> num;
		sum += num;
		w[i] = sum;
	}


	for (int i = 0; i <= n; i++) {
		for (int j = i+1; j <= n; j++) {
			h_cnt[h[j] - h[i]]++;	
		}
	}
	for (int i = 0; i <= m; i++) {
		for (int j = i+1; j <= m; j++) {
			w_cnt[w[j] - w[i]]++;	
		}
	}
	
	int ans = 0;
	for (int i = 1; i < h_cnt.size(); i++) {
		ans += h_cnt[i] * w_cnt[i];	
	}
	cout << ans << endl;
	}
	
	return 0;
}