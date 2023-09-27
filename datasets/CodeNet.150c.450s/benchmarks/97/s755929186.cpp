#include<iostream>
using namespace std;

int main()
{
	int i,N,n,d;

	cin>>N;
	while(N!=0){
		int x[200],y[200];
		x[0]=0; y[0]=0;
		int MAXx=-1000,MINx=1000,MAXy=-1000,MINy=1000;
		int height,width;

		for(i=1;i<N;i++){
			cin>>n>>d;
			x[i]=x[n]; y[i]=y[n];
			if(d==0) x[i]--;
			if(d==1) y[i]--;
			if(d==2) x[i]++;
			if(d==3) y[i]++;
		}
		for(i=0;i<N;i++){
			if(MAXx < x[i]) MAXx=x[i];
			if(MINx > x[i]) MINx=x[i];
			if(MAXy < y[i]) MAXy=y[i];
			if(MINy > y[i]) MINy=y[i];
		}
		width=MAXx-MINx+1;
		height=MAXy-MINy+1;

		cout<<width<<" "<<height<<endl;
		cin>>N;
	}
}