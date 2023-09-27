#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int m,n,d,xmax,xmin,ymax,ymin;
	while(cin>>m){
		if(m==0) break;
		int x[200],y[200];
		for(int i=0;i<200;i++){
			x[i]=0;
			y[i]=0;
		}
		xmax=0;
		xmin=0;
		ymax=0;
		ymin=0;
		for(int i=1;i<m;i++){
			cin>>n>>d;
			if(d==0){
				x[i]=x[n]-1;
				y[i]=y[n];
			}
			else if(d==1){
				x[i]=x[n];
				y[i]=y[n]-1;
			}
			else if(d==2){
				x[i]=x[n]+1;
				y[i]=y[n];
			}
			else if(d==3){
				x[i]=x[n];
				y[i]=y[n]+1;
			}
			xmax=max(xmax,x[i]);
			xmin=min(xmin,x[i]);
			ymax=max(ymax,y[i]);
			ymin=min(ymin,y[i]);
		}
		cout<<xmax-xmin+1<<" "<<ymax-ymin+1<<endl;
	}
    return 0;
}