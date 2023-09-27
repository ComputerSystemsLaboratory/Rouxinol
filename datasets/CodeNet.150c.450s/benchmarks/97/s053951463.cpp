#include<cstdio>
#include<iostream>

#define NMAX 200

using namespace std;

typedef struct{
	int x;
	int y;
}map;

int main(void){

	int N;
	int n,d;
	int dx[4]={-1, 0, 1, 0};///L D R U
	int dy[4]={ 0, 1, 0,-1};
	map box[NMAX];
	map max,min;
	
	while(1){
		cin>>N;
		if(N==0) break;
		box[0].x=0;
		box[0].y=0;
		for(int i=1;i<N;i++){
			cin>>n>>d;
			box[i].x=box[n].x+dx[d];
			box[i].y=box[n].y+dy[d];
		}
		max.x=box[0].x;
		min.x=box[0].x;
		max.y=box[0].y;
		min.y=box[0].y;
		for(int i=1;i<N;i++){
			if(max.x<box[i].x) max.x=box[i].x;
			if(min.x>box[i].x) min.x=box[i].x;
			if(max.y<box[i].y) max.y=box[i].y;
			if(min.y>box[i].y) min.y=box[i].y;
		}
		cout<<max.x-min.x+1<<" "<<max.y-min.y+1<<endl;
	}

	return 0;
}