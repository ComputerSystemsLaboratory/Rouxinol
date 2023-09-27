#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int H,W;
bool fld[50][50];
void del(int x,int y){
	fld[x][y]=0;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			int nx=x+i,ny=y+j;
			if(nx>=0 && nx<W && ny>=0 && ny<H && fld[nx][ny])del(nx,ny);
		}
	}
}
int main(){
	while(cin>>W>>H,W,H){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cin>>fld[j][i];
			}
		}
		int cnt=0;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(fld[j][i]){
					cnt++;
					fld[j][i]=0;
					del(j,i);
				}
			}
		}
		cout<<cnt<<endl;
	}
}