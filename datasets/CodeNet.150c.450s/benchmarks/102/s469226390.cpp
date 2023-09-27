#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int dx[]={-1,0,1,0},dy[]={0,-1,0,1};
int H,W;
char fld[20][20];
int main(){
	queue<pair<int,int> > p;
	while(cin>>W>>H,H,W){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>fld[j][i];
				if(fld[j][i]=='@'){
					fld[j][i]='#';
					p.push(make_pair(j,i));
				}
			}
		}
		int cnt=1;
		while(!p.empty()){
			int x=p.front().first,y=p.front().second;
			p.pop();
			for(int i=0;i<4;i++){
				int nx=x+dx[i],ny=y+dy[i];
				if(nx>=0 && nx<W && ny>=0 && ny<H && fld[nx][ny]=='.'){
					fld[nx][ny]='#';
					p.push(make_pair(nx,ny));
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}