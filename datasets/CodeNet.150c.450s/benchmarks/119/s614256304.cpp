#include <iostream>

using namespace std;
int c[51][51];
int w ,h;

bool input(){
	cin >> h >> w;
	if(w==0) return false;
	for(int i = 0;i <51;i++){
		for(int j = 0;j <51 ;j++){
			c[i][j] = 2;
		}
	}

	for(int i = 0;i < w ;i++){
		for(int j = 0; j < h ;j++){
			cin >> c[i][j];
//			cout <<c[i][j];
		}
	}
	return true;
}

void dfs(int x,int y){
	c[x][y] = 0;
	for(int i = -1; i <=1 ;i++){
		for(int j = -1; j <=1 ;j++){
			int nx = x + i;
			int ny = y + j;
//			cout <<nx << ' ' << ny << endl;
			if(0 <= nx && nx < w && 0 <= ny && ny < h && c[nx][ny] == 1)dfs(nx,ny);
		}
	}
}

void solve(){
	int res = 0;
/*	for(int i=0;i < w ;i++){
		for (int j=0;j < h;j++){
			cout <<c[i][j];
		}
		cout <<endl;
	}
*/
	for(int i=0; i < w;i++){
		for(int  j=0;j < h;j++){
			if(c[i][j] ==1){
//				cout << i << ' ' << j << endl;
				res++;
				dfs(i,j);
			}
		}
	}
	cout << res << endl;

/*	for(int i=0;i < w ;i++){
		for (int j=0;j<h;j++){
			cout <<c[i][j];
		}
		cout <<endl;
	}
	*/
}

int main(){
	while(input())solve();
}


