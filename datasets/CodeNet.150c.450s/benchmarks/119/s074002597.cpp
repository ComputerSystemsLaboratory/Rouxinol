#include <iostream>
using namespace std;

int w,h;
int mp[50][50];

void rec(int y,int x){
	if(mp[y][x]==0)return;
	mp[y][x]=0;
	if(x+1<w)rec(y,x+1);
	if(y+1<h)rec(y+1,x);
	if(x-1>=0)rec(y,x-1);
	if(y-1>=0)rec(y-1,x);
	if(x+1<w&&y-1>=0)rec(y-1,x+1);
	if(x+1<w&&y+1<h)rec(y+1,x+1);
	if(x-1>=0&&y+1<h)rec(y+1,x-1);
	if(y-1>=0&&x-1>=0)rec(y-1,x-1);
}

int main(){
	int x,y,ret;
	while(cin >> w >> h && w && h){
		ret = 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin >> mp[i][j];
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(mp[i][j]){
					rec(i,j);
					ret++;
				}
			}
		}
		cout << ret << endl;
	}
	return 0;
}