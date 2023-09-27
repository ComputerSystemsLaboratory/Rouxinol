#include<stdio.h>

int main(){
	int N,i,j,n,d,map[201][2],minx,maxx,miny,maxy;
	
	while(0<=scanf("%d",&N)){
		if(0==N) break;
		
		map[0][0]=0;
		map[0][1]=0;
		for(i=1;i<N;i++){
			scanf("%d%d",&n,&d);
			switch (d){
			  case 0:
				map[i][0]=map[n][0]-1;
				map[i][1]=map[n][1];
				break;
			  case 1:
				map[i][0]=map[n][0];
				map[i][1]=map[n][1]-1;
				break;
			  case 2:
				map[i][0]=map[n][0]+1;
				map[i][1]=map[n][1];
				break;			  
			  case 3:
				map[i][0]=map[n][0];
				map[i][1]=map[n][1]+1;
				break;
			}
		}
		
		minx=200;
		miny=200;
		maxx=-200;
		maxy=-200;
		for(i=0;i<=N-1;i++){
			if(minx>map[i][0]) minx=map[i][0];
			if(miny>map[i][1]) miny=map[i][1];
			if(maxx<map[i][0]) maxx=map[i][0];
			if(maxy<map[i][1]) maxy=map[i][1];
		}
		printf("%d %d\n",maxx-minx+1,1+maxy-miny);
	}
	return 0;
}