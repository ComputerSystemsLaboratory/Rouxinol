#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,d,e,f;
	while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)!=EOF){
		double x,y;
		y=(double)(c*d/a-f)/(b*d/a-e);
		x=(double)(c-b*y)/a;
		printf("%.3lf %.3lf\n",x,y);
	}
}