#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

struct coordinate{ int x; int y;};
vector<coordinate> ans;

int main(){
	while(1){
		int n;
		cin >> n;
		if(n == 0)break;
		map<int,coordinate> mp;
		bool field[401][401];//center is 200 200
		for(int i = 0;i < 401;i++){
			for(int j = 0;j < 401;j++){
				field[i][j] = false;
			}
		}
		coordinate za;
		za.x = 200; za.y=200;
		mp[0] = za;
		field[200][200] = true;
		
		for(int i = 1;i < n;i++){
			int from;
			int dir;
			cin >> from >> dir;
			
			coordinate move;
			if(dir == 0){move.x = -1; move.y = 0;}
			else if(dir == 1){move.x = 0;move.y = -1;}
			else if(dir == 2){move.x = 1;move.y = 0;}
			else{move.x = 0;move.y = 1;}
			
			coordinate to;
			to.x = mp[from].x + move.x;
			to.y = mp[from].y + move.y;
			field[to.y][to.x] = true;
			mp[i] = to;
		}
		
		coordinate mx,mn;
		mx.x = 0; mx.y = 0;
		mn.x = 1e9; mn.y = 1e9;
		for(int i = 200 - n;i < (200 + n);i++){
			for(int j = 200 - n;j < (200 + n);j++){
				if(field[i][j]){
					mx.x = max(mx.x,j);
					mx.y = max(mx.y,i);
					mn.x = min(mn.x,j);
					mn.y = min(mn.y,i);
				}
			}
		}
		
		coordinate si;
		si.x = mx.x - mn.x + 1;
		si.y = mx.y - mn.y + 1;
		
		ans.push_back(si);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i].x << " " << ans[i].y <<endl;
	
	return 0;
}