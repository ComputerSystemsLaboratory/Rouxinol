#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
bool gem[21][21];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int main() {
	int N;
	while(scanf("%d",&N),N) {
		for(int i=0;i<=20;i++) {
			for(int j=0;j<=20;j++) gem[i][j]=0;
		}
		for(int i=0;i<N;i++) {
			int x,y;
			scanf("%d %d",&x,&y);
			gem[x][y]=1;
		}
		int M;
		scanf("%d",&M);
		int x=10,y=10;
		char d[2];
		int l;
		for(int i=0;i<M;i++) {
			scanf("%s %d",d,&l);
			int D=0;
			switch(d[0]) {
			case 'N':D=0;break;
			case 'E':D=1;break;
			case 'S':D=2;break;
			case 'W':D=3;break;
			}
			for(int j=0;j<l;j++) {
				x+=dx[D];
				y+=dy[D];
				if(gem[x][y]) {
					N--;
					gem[x][y]=0;
				}
			}
		}
		printf("%s\n",N>0?"No":"Yes");
	}
}