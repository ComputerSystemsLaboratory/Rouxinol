#include <cstdio>
#include <iostream>
using namespace std;

typedef struct{
	int x;
	int y;
}point;

int main(){
	while(1){
		int n;
		int dx[4]={-1,0,1,0}, dy[4]={0,-1,0,1};
		point plot[201];
		
		scanf(" %d", &n);
		if(n==0) break;
		plot[0].x=0;
		plot[0].y=0;
		
		int right=0, left=0, top=0, bottom=0;
		
		for(int i=1; i<n; ++i){
			int s, d;
			scanf(" %d %d", &s, &d);
			
			plot[i].x = plot[s].x+dx[d];
			plot[i].y = plot[s].y+dy[d];
			
			if(plot[i].x>top) top=plot[i].x;
			else if(plot[i].x<bottom) bottom=plot[i].x;
			
			if(plot[i].y>right) right=plot[i].y;
			else if(plot[i].y<left) left=plot[i].y;	
		}
		
	printf("%d %d\n", top-bottom+1, right-left+1);
	}
	return 0;
}