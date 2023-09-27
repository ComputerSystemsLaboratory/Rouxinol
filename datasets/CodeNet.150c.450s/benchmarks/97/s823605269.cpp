#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int N;
int x[201],y[201];
int main(){
	while(cin>>N&&N){
		int xmin=0,xmax=0,ymin=0,ymax=0;
		x[0]=y[0]=0;
		for(int i=1;i<N;i++){
			int n,d,nx,ny;
			cin>>n>>d;
			nx = x[n];ny=y[n];
			if(d==0)nx++;
			else if(d==1)ny++;
			else if(d==2)nx--;
			else ny--;
			xmax=max(xmax,nx);
			xmin=min(xmin,nx);
			ymax=max(ymax,ny);
			ymin=min(ymin,ny);
			x[i]=nx;
			y[i]=ny;
		}
		cout<<xmax-xmin+1<<' '<<ymax-ymin+1<<endl;
	}
	return 0;
}