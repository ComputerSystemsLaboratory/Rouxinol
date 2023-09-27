#include<iostream>

using namespace std;

#define NMAX 200
#define NOT 10000

int main(){

	int N;
	int x[NMAX];
	int y[NMAX];
	int n,d;

	while(1){

		cin>>N;
		if(N==0) break;

		for(int i=0;i<N;i++) x[i]=NOT,y[i]=NOT;
		x[0]=0,y[0]=0;
		for(int i=1;i<=N-1;i++){
			cin>>n>>d;
			if(d==0) x[i]=x[n]-1,y[i]=y[n]; 
			if(d==1) x[i]=x[n],y[i]=y[n]-1; 
			if(d==2) x[i]=x[n]+1,y[i]=y[n]; 
			if(d==3) x[i]=x[n],y[i]=y[n]+1;
		}
		int xmin=0,xmax=0,ymax=0,ymin=0;
		for(int i=0;i<=N-1;i++){
			if(xmin>x[i]) xmin=x[i];
			if(ymin>y[i]) ymin=y[i];
			if(xmax<x[i]) xmax=x[i];
			if(ymax<y[i]) ymax=y[i];
		}
		cout<<(xmax-xmin+1)<<" "<<(ymax-ymin+1)<<endl;
	}

}