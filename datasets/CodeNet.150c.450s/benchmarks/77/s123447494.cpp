#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> ans;
int n,m;
int main(){
	while(1){
		cin >> n;
		if(n == 0) break;
		bool map[21][21] = {false};
		for(int i = 0;i < n;i++){
			int x,y;
			cin >> x >> y;
			map[y][x] = true;
		}
		cin >> m;
		int count = 0;
		int nx = 10,ny = 10;
		for(int i = 0;i < m;i++){
			char dir;
			int dis;
			cin >> dir >> dis;
			for(int j = 0;j < dis;j++){
				if(dir == 'N'){
					ny++;
					if(map[ny][nx]){count++;map[ny][nx] = false;}
				}
				else if(dir == 'E'){
					nx++;
					if(map[ny][nx]){count++;map[ny][nx] = false;}
				}
				else if(dir == 'S'){
					ny--;
					if(map[ny][nx]){count++;map[ny][nx] = false;}
				}
				else{
					nx--;
					if(map[ny][nx]){count++;map[ny][nx] = false;}
				}
			}
		}
		if(count == n) ans.push_back("Yes");
		else ans.push_back("No");
	}
	for(int i = 0;i < ans.size();i++){
		cout << ans[i] << endl;
	}
}