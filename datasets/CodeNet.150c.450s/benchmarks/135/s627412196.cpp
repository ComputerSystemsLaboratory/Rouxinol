#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

#define REP(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main(){
	int n;
	int m;
	cin >> n >>  m;

	while(n != 0 && m != 0){
		vector<int> x, y;
		x.push_back(0);
		y.push_back(0);
		REP(i, n){
			int h;
			cin >> h;
			h += y[i];
			y.push_back(h);
		}
		REP(i, m){
			int w;
			cin >> w;
			w += x[i];
			x.push_back(w);
		}

		map<int, int> cnt;
		REP(i, n + 1){
			REP(j, m + 1){
				cnt[y[i] - x[j]]++;
			}
		}
				
		int ans = 0;
		map<int, int>::iterator it = cnt.begin();
		while(it != cnt.end()){
			ans += it -> second *( it -> second - 1)/ 2;
			it++;
		}
		cout << ans << endl;
		cin >> n >> m;
	}
	return 0;
}