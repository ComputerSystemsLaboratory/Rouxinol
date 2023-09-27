#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
using namespace std;

int w, h;
int map[50][50];
int ans;

void Suibotu(int y, int x)
{//??¨??????????????????????±?????????¶????????°???????°´????????????
	map[y][x] = 0;
	if(x<w-1 && map[y][x+1]==1)				//???
		Suibotu(y, x+1);
	if(x<w-1 && y<h-1 && map[y+1][x+1]==1)	//??????
		Suibotu(y+1, x+1);
	if(y<h-1 && map[y+1][x]==1)				//???
		Suibotu(y+1, x);
	if(x>0 && y<h-1 && map[y+1][x-1]==1)	//??????
		Suibotu(y+1, x-1);
	if(x>0 && map[y][x-1]==1)				//???
		Suibotu(y, x-1);
	if(x>0 && y>0 && map[y-1][x-1]==1)		//??????
		Suibotu(y-1, x-1);
	if(y>0 && map[y-1][x]==1)				//???
		Suibotu(y-1, x);
	if(x<w-1 && y>0 && map[y-1][x+1]==1)	//??????
		Suibotu(y-1, x+1);
}
int main(){
	cin >> w >> h;
	while(w+h>0){
		ans = 0;
		for(int i=0; i<h; i++)
			for(int j=0; j<w; j++)
				cin >> map[i][j];
			for(int i=0; i<h; i++)
			for(int j=0; j<w; j++)
				if(map[i][j]==1){
					ans++;
					Suibotu(i, j);
				}
		cout << ans << endl;
		cin >> w >> h;
	}
	return 0;
}