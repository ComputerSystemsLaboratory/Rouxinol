#include<bits/stdc++.h>
#define INF 2000000000
#define MOD 1000000007
#define EPS (1e-10)

using namespace std;


vector<int>  dx = {1,-1,0,0};
vector<int>  dy = {0,0,1,-1};


int main() {

	while(1) {
		int n; cin >> n;
		if (n == 0) break;

		// 左側(= 0)，下側 (= 1)，右側 (= 2)，上側 (= 3)
		map<int,pair<int,int>> p;
		p[0] = make_pair(0,0);
		for (int i = 1; i < n; i++) {
			int  num,d; cin >> num >> d;
			p[i] = p[num];
			if (d == 0) {
				p[i].first--;
			}else if(d == 1) {	
				p[i].second--;
			}else if(d == 2) {	
				p[i].first++;
			}else if(d == 3) {	
				p[i].second++;
			}
		}

		/*
		for(auto x: p) {
			cout << x.first << " " << x.second <<  endl;
		}
		*/

		int h_max = 0;
		int h_min = 0;
		int w_max = 0;
		int w_min = 0;
		for (int i = 0; i < n; i++) {
			if(w_max < p[i].first) {
				w_max = p[i].first;
			}
			if(w_min > p[i].first) {
				w_min = p[i].first;
			}
			if(h_max < p[i].second) {
				h_max = p[i].second;
			}
			if(h_min > p[i].second) {
				h_min = p[i].second;
			}
		}
		cout << w_max - w_min + 1 << " " << h_max - h_min + 1 << endl;
	}

	return 0;
}

