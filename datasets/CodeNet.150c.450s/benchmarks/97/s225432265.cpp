#include <iostream>
using namespace std;
typedef struct{
	int x;
	int y;
}POS;
POS pos[201];
int maxx,minx,miny,maxy;
int a,n,d;
int main(){
	while(1){
		cin >>n;
		if(n==0)break;
		minx=miny=maxx=maxy=0;
		pos[0].x=pos[0].y=0;
		for(int i=1;i<n;i++){
			cin >> a>>d;
			if(d==0){
				pos[i].x=pos[a].x-1;
				pos[i].y=pos[a].y;
			}else if(d==1){
				pos[i].x=pos[a].x;
				pos[i].y=pos[a].y-1;
			}else if(d==2){
				pos[i].x=pos[a].x+1;
				pos[i].y=pos[a].y;
			}else if(d==3){
				pos[i].x=pos[a].x;
				pos[i].y=pos[a].y+1;
			}
			if(maxx<pos[i].x)maxx=pos[i].x;
			if(minx>pos[i].x)minx=pos[i].x;
			if(maxy<pos[i].y)maxy=pos[i].y;
			if(miny>pos[i].y)miny=pos[i].y;
		}
		cout <<maxx-minx+1 << " "<<maxy-miny+1 <<endl;
	}
}