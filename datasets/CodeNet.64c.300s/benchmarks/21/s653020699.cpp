#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	float a,b,c,d,e,f,x,y;
	while(cin>>a){
	cin>>b>>c>>d>>e>>f;
	x=(c*e-b*f)/(a*e-b*d);
	y=(c*d-a*f)/(b*d-a*e);
	if(x>-0.0005&&x<=0.0005){
		x=0;
	}
	if(y>-0.0005&&y<=0.0005){
		y=0;
	}
	printf("%.3f %.3f",x,y);
	cout<<endl;
	}
	return 0;
	}