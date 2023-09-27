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

struct item {
	int value;
	int weight;
	item(int v = 0, int w = 0) {
		value = v; weight = w;
	}
};

const int MAX_W = 10010;
const int MAX_N = 101;

int main() {
	int N, W;
	cin >> N >> W;
	vector<item> items(N, 0);
	for(int i = 0; i < N; ++i) {
		int v, w;	
		cin >> v >> w;	
		items[i] = item(v, w);
	}

	int dp[MAX_W][MAX_N]; // ??????i?????§????????????????±?????????¨???????????????????????????w????????£???????????????????????§???
	fill_n((int *)dp, MAX_W*MAX_N, 0);	
	
	for(int w = 0; w <= W; ++w) {
		for(int i = (N - 1); i >= 0; --i) {
			if(w < items[i].weight) {
				dp[w][i] = dp[w][i + 1];
			} else {
				dp[w][i] = max(dp[w][i + 1], dp[w - items[i].weight][i + 1] + items[i].value);		
			}	
		}
	}

	cout << dp[W][0] << endl;
	return 0;
}