#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	float a,b,c,d,e,f,g,x,y,ans;
	float B,C,E,F,j,k,l;
	while(cin>>a>>b>>c>>d>>e>>f){
		B=b*d;
		C=c*d;
		E=a*e;
		F=a*f;
		j=B-E;
		k=C-F;
		y=k/j;
		x=(c-b*y)/a;
		printf("%.3lf %.3lf\n",x,y);
	}
	return 0;
}