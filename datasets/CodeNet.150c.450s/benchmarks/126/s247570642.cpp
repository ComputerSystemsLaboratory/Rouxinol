#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

int mt[100][100];
int w,h;
vector<pair<int,int> > block;


void saiki(int y,int x){
	rep(i,block.size())
		if(y==block[i].first && x==block[i].second){
			mt[y][x]=0;
			return;
		}
	if(x-1>=0 && y-1>=0)mt[y][x]=mt[y][x-1]+mt[y-1][x];
	else if(x-1>=0)mt[y][x]=1;
	else if(y-1>=0)mt[y][x]=1;

	if(y==h-1 && x==w-1)return;
	
	if(x+1<w)saiki(y,x+1);
	if(y+1<h)saiki(y+1,x);
}

int main(){
	int n,x,y;
	while(cin >> w >> h && w && h){
		block.clear();
		
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			x--;y--;
			block.push_back( pair<int,int>(y,x) );
		}
		rep(i,100)rep(j,100)mt[i][j]=0;
		mt[0][0]=1;
		saiki(0,0);
		cout << mt[h-1][w-1] << endl;
	}
}