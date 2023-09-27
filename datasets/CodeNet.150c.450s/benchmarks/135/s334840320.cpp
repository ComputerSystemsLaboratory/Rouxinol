#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const int INF = 100000000;

int main(){
	//freopen("test.txt", "r", stdin);
	while(1){
		int n, m;
		cin >> n >> m;
		if(!n && !m) break;
		vector<int> h(n);
		vector<int> hc;
		rep(i, n){
			cin >> h[i];
		}
		for(int i = 0; i < n; i++){
			int hsum = 0;
			for(int j = i; j < n; j++){
				hsum += h[j];
				hc.push_back(hsum);
			}
		}
		vector<int> w(m);
		vector<int> wc;
		rep(i, m){
			cin >> w[i];
		}
		for(int i = 0; i < m; i++){
			int wsum = 0;
			for(int j = i; j < m; j++){
				wsum += w[j];
				wc.push_back(wsum);
			}
		}

		sort(all(hc));
		sort(all(wc));

		int cnt = 0;
		rep(i, hc.size()){
			cnt += (upper_bound(all(wc), hc[i]) - lower_bound(all(wc), hc[i]));
		}

		cout << cnt << endl;
	}
	return 0;
}