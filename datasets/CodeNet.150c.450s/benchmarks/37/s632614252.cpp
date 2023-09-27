#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>


using namespace std;


double solveY(int a,int b,int c,int d,int e,int f){
	double ret;
	ret=(double)(a*f-d*c)/(a*e-b*d);
	return ret;
}

int main(){
	while(1){
		int a,b,c,d,e,f;
		if( !(cin>>a>>b>>c>>d>>e>>f) )break;
		double y=solveY(a,b,c,d,e,f);
		double x=(c-b*y)/a;
		printf("%5.3lf %5.3lf\n",x,y);
	}
	return 0;
}