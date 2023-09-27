#include <algorithm>
#include <iostream>

using namespace std;

int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};


int main(){
	int i,j,N,n,d;
	while(cin>>N,N){
		struct{int x,y;} log[205]={0}, Min={0}, Max={0};
		for(i=1;i<N;i++){
			cin>>n>>d;
			log[i].x=log[n].x+dx[d];
			log[i].y=log[n].y+dy[d];
			Max.x=max(Max.x, log[i].x);
			Max.y=max(Max.y, log[i].y);
			Min.x=min(Min.x, log[i].x);
			Min.y=min(Min.y, log[i].y);
		}
		cout << Max.x-Min.x+1 << ' ' << Max.y - Min.y+1 << endl;
	}
	return 0;
}