#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;


bool field[20][20];
int cnt;

int dx[] = {1,0};
int dy[] = {0,1};
int h,w;

void dfs(int x,int y){
	for(int i = 0; i < 2; i++){
		int px = x + dx[i];
		int py = y + dy[i];
		if(px >= 0 && px < w && py >= 0 && py < h){
			if(py == h-1 && px == w - 1){
				cnt++;
				return;
			}
			if(field[py][px] == true){
				dfs(px,py);
			}
		}
	}
}


int main(){

	int n;

	while(cin >> w >> h && !(w == 0 && h == 0)){
		for(int i = 0; i < 20; i++)
			fill(field[i],field[i]+20,true);
		cin >> n;
		cnt =0;
		for(int i = 0; i < n; i++){
			int xx,yy;
			cin >> xx >> yy;
			xx--;
			yy--;
			field[yy][xx] = false;
		}
		dfs(0,0);
		cout << cnt << endl;
	}


	return 0;
}