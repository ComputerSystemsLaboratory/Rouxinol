#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<cstring>
using namespace std;
int semi[51][51],h,w,r[51][51];
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int min(int a,int b,int c,int d){
	int mini;
	mini=min(a,b);
	mini=min(mini,c);
	mini=min(mini,d);
	return mini;
}
int main(){
	while(1){
		int n,i,j,x[201],y[201],xmax=0,xmin=0,ymax=0,ymin=0,a,d;
		cin>>n;
		if(n==0)break;
		x[0]=0;y[0]=0;
		for(i=1;i<n;i++){
			cin>>a>>d;
			switch(d){
			case 0:
				x[i]=x[a]-1;y[i]=y[a];
				xmin=min(xmin,x[i]);
				break;
			case 1:
				x[i]=x[a];y[i]=y[a]-1;
				ymin=min(ymin,y[i]);
				break;
			case 2:
				x[i]=x[a]+1;y[i]=y[a];
				xmax=max(x[i],xmax);
				break;
			case 3:
				x[i]=x[a];y[i]=y[a]+1;
				ymax=max(y[i],ymax);
				break;
			default:
				break;
			}
		}
	cout<<xmax-xmin+1<<' '<<ymax-ymin+1<<endl;
	}
	return 0;
}