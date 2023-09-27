#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include<string.h>
using namespace std;

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int N;

void solve(){
	int x[200],y[200];
	memset(x,-1,sizeof(x));
	memset(y,-1,sizeof(y));

	bool box[500][500];
	memset(box,false,sizeof(box));
	box[250][250]=true;
	x[0]=250;y[0]=250;
	for(int i=1;i<=N-1;i++){
		int id,dir;
		cin>>id>>dir;
		int nx=x[id]+dx[dir],ny=y[id]+dy[dir];
		x[i]=nx;
		y[i]=ny;
		box[ny][nx]=true;
	}

	int left=10000,right=-1,top=100000,bottom=0;

	for(int y=0;y<500;y++)
		for(int x=0;x<500;x++)
			if(box[y][x]){
				left=min(left,x);
				right=max(right,x);
				top=min(top,y);
				bottom=max(bottom,y);
			}

	cout<<right-left+1<<" "<<bottom-top+1<<endl;
}

int main(){
	while(cin>>N){
		if(N==0) break;
		solve();
	}
	return 0;
}