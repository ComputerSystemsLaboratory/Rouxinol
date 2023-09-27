#include<iostream>
using namespace std;
int main(){
	int x[300],y[300],minx,n,miny,maxy,maxx;
	int dx[]={-1,0,1,0},dy[]={0,-1,0,1},s,w;
	x[0]=0,y[0]=0;
	while(cin>>n,n){
		miny=0;
		minx=0;
		maxx=0;
		maxy=0;
		for(int i=1;i<=n-1;i++){
			cin>>s>>w;
			x[i]=x[s]+dx[w];
			y[i]=y[s]+dy[w];
			if(x[i]>maxx)
			maxx=x[i];
			else	if(x[i]<minx)
			minx=x[i];
			else if(y[i]>maxy)
			maxy=y[i];
			else if(y[i]<miny)
			miny=y[i];
		}
		cout<<maxx-minx+1<<' '<<maxy-miny+1<<endl;
	}
	return 0;
}