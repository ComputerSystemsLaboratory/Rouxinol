#include <iostream>
#include <vector>
using namespace std;

int w, h, ans, tmp;
vector<vector<int>> c(60, vector<int>(60,0));

void ume(int x, int y){
	if(c[x][y]==0) return;
	c[x][y]=0;
	ume(x-1,y);
	ume(x+1,y);
	ume(x-1,y-1);
	ume(x,y-1);
	ume(x+1,y-1);
	ume(x-1,y+1);
	ume(x,y+1);
	ume(x+1,y+1);
	return;
}

bool hantei(int x, int y){
	if(c[x][y]==1){
		ume(x,y);
		return 1;
	}
	else return 0;
}

int main(){
	while(cin >> w >> h){
		if(w == 0&&h==0) break;
		ans = 0;
		for(int i = 1;i<=h;i++){
			for(int j = 1;j<=w;j++){
				cin >> c[i][j];
			}
		}
		for(int i = 1;i<=h;i++){
			for(int j = 1;j<=w;j++){
				ans+=hantei(i,j);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
