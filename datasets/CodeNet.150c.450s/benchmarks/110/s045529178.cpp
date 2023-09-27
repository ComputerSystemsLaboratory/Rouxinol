#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int h, w, n;
vector<vector<bool>> mp;
vector<pair<int,int>> f;

int calc(pair<int,int> start, pair<int,int> end){
	vector<vector<int>> hi(w, vector<int>(h, 1145141919));
	priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> q;
	q.push(make_pair(0, start));
	while(q.size()){
		int c = q.top().first;
		pair<int,int> p = q.top().second;
		q.pop();
		if(p == end) return c;
		int x = p.first;
		int y = p.second;
		for(int dx = -1; dx <= 1; dx++){
			for(int dy = -1; dy <= 1; dy++){
				if((!!dx ^ !!dy) && 0 <= x+dx && x+dx < w && 0 <= y+dy && y+dy < h && !mp[x+dx][y+dy] && hi[x+dx][y+dy] > c+1){
					hi[x+dx][y+dy] = c+1;
					q.push(make_pair(c+1, make_pair(x+dx, y+dy)));
				}
			}
		}
	}
	return -1;
}

int main(){
	cin >> h >> w >> n;
	mp.assign(w, vector<bool>(h, false));
	f.assign(n+1, make_pair(0, 0));
	for(int y = 0; y < h; y++){
		for(int x = 0; x < w; x++){
			char a;
			cin >> a;
			if(a == 'X') mp[x][y] = true;
			if(a == 'S') f[0] = make_pair(x, y);
			if('1' <= a && a <= '9') f[a - '0'] = make_pair(x, y);
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; i++){
		ans += calc(f[i-1], f[i]);
	}
	cout << ans << endl;
	return 0;
}