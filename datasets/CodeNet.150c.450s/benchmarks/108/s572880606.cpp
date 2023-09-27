#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

#define REP(var, count) for(int var=0; var<count; var++)

int main(void) {
	int N;
	cin >> N;
	
	vector<int> rin[105];
	int ans[105];
	
	REP(i, N) {
		int u, k;
		cin >> u >> k;
		
		REP(j, k) {
			int c;
			cin >> c;
			
			rin[u].push_back(c);
		}
		
		ans[i] = -1;
	}
	ans[N] = -1;
	
	ans[1] = 0;
	queue<int> que;
	que.push(1);
	
	while(que.size()) {
		int s = que.front();
		que.pop();
		
		//cerr << "checking " << s << endl;
		
		REP(j, rin[s].size() ) {
			//cerr << "edge to " << rin[s][j] << endl;
			if ( ans[rin[s][j]] == -1 ) {
				ans[rin[s][j]] = ans[s] + 1;
				que.push(rin[s][j]);
			}
		}
	}
	
	for(int i=1; i<=N; i++) {
		cout << i << " " << ans[i] << endl;
	}
}