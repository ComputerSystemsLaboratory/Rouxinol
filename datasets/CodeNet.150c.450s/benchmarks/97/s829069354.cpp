#include<iostream>
#include<algorithm>

using namespace std;

const int dy[]={0,1,0,-1};
const int dx[]={-1,0,1,0};

int main(){
	int N;
	int n,d;
	int minX,maxX,minY,maxY;
	
	
	while(cin>>N,N){
		
		int x[210]={0};
		int y[210]={0};
		minX=maxX=minY=maxY=0;
		for(int i=0;i<N-1;i++){
			cin>>n>>d;
			y[i+1]=y[n]+dy[d];
			x[i+1]=x[n]+dx[d];
		}
		for(int i=0;i<N-1;i++){
			minX=min(minX,x[i+1]);
			maxX=max(maxX,x[i+1]);
			minY=min(minY,y[i+1]);
			maxY=max(maxY,y[i+1]);
		}
		cout<<maxX-minX+1<<" "<<maxY-minY+1<<endl;
	}
	return 0;
}