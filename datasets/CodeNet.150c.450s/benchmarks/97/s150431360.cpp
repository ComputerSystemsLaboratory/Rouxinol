#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int dx[4] = {-1, 0 , 1, 0}, dy[4] = {0 , -1, 0, 1};

int main(void) {
	int n;
	while(cin >> n, n){
		int left = 0;
		int right = 0;
		int up = 0;
		int down = 0;
		vector< pair<int, int> > sq;
		sq.pb(make_pair(0,0));

		for(int i=0; i<n-1; i++){
			int num;
			int dir;
			cin >> num >> dir;
			
			int y = sq[num].first + dy[dir];
			int x = sq[num].second + dx[dir];
			left = min(x, left);
			right = max(x, right);
			up = max(y, up);
			down = min(y, down);
			//printf("%d %d %d %d\n", left, right, up, down);
			sq.pb(make_pair(y, x));
		}

		cout << right + 1 - left << " " << up + 1 - down << endl;
	}
	
	return 0;
}