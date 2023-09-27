#include<set>
#include<queue>
#include<utility>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<numeric>
#include<functional>
#include<string>
#include<iostream>
using namespace std;
const long long int one = 1;
const long long int big = (one<<20);
typedef long long int llint;

//	. 0x2e	X 0x58	S 0x53	1~ 0x31~
int main(void){
	int H,W,N,h,i,j,x,y,t,ans=0;
	queue<tuple<int,int,int>> que;
	static char Chezu[1002][1002];//??°?????¨???????????????????????????
	static int time[1002][1002];
	int Cx[10];
	int Cy[10];
	scanf("%d %d %d",&H,&W,&N);
	for(j=0;j<=W+1;j++){Chezu[0][j]=0x58;}
	for(i=1;i<=H;i++){Chezu[i][0]=0x58;scanf(" %s",Chezu[i]+1);Chezu[i][W+1]=0x58;}
	for(j=0;j<=W+1;j++){Chezu[H+1][j]=0x58;}

	for(i=1;i<=H;i++){
		for(j=1;j<=W;j++){
			if(Chezu[i][j]==0x53){
				Cx[0]=i;Cy[0]=j;
			}
			if(0x31<=Chezu[i][j]&&Chezu[i][j]<=0x39){
				Cx[Chezu[i][j]-0x30]=i;
				Cy[Chezu[i][j]-0x30]=j;
			}
		}
	}
	for(h=0;h<N;h++){
		while(!que.empty()){que.pop();}
		for(i=0;i<H+2;i++){
			for(j=0;j<W+2;j++){
				time[i][j]=big;
			}
		}
		que.push(make_tuple(Cx[h],Cy[h],0));
		while(!que.empty()){
			x=get<0>(que.front());
			y=get<1>(que.front());
			t=get<2>(que.front());
			que.pop();
			if(x==Cx[h+1]&&y==Cy[h+1]){break;}
			if(time[x][y]<=t){ continue; }
			time[x][y]=t;
			if(Chezu[x+1][y]!=0x58){ que.push(make_tuple(x+1,y,t+1)); }
			if(Chezu[x-1][y]!=0x58){ que.push(make_tuple(x-1,y,t+1)); }
			if(Chezu[x][y+1]!=0x58){ que.push(make_tuple(x,y+1,t+1)); }
			if(Chezu[x][y-1]!=0x58){ que.push(make_tuple(x,y-1,t+1)); }
		}
		ans+=t;
	}
	printf("%d\n",ans);
	return 0;
}