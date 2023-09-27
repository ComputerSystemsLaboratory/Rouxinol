#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

typedef pair<int, int> P;

int main() {
	int n;
	long long m;
	while(cin >> n >> m && (n || m)){
		priority_queue<P> que;
		int d, p;
		for(int i = 0; i < n; ++i){
			cin >> d >> p;
			que.push(P(p, d));
		}
		long long ans = 0;
		while(!que.empty()){
			P p = que.top(); que.pop();
			m -= p.second;
			if(m <= 0){
				ans += p.first * abs(m);
				break;
			}
		}
		while(!que.empty()){
			P p = que.top(); que.pop();
			ans += p.first * p.second;
		}
		cout << ans << endl;
	}
	return 0;
}