#include<cstdio>
#include<cmath>
using namespace std;

double spase(double a,double b,double c,double d,double e,double f){
	double x,y,z;
	x=sqrt( (a-c)*(a-c)+(b-d)*(b-d) );
	y=sqrt( (c-e)*(c-e)+(d-f)*(d-f) );
	z=sqrt( (e-a)*(e-a)+(f-b)*(f-b) );
	return sqrt((x+y+z)*(y-x+z)*(x-y+z)*(x+y-z));
}

int main(){
	double a,b,c,d,e,f,p,q;
	while( scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&p,&q) != EOF ){
	if( (float)spase(a,b,c,d,e,f)==(float)(spase(a,b,c,d,p,q)+spase(a,b,e,f,p,q)+spase(p,q,c,d,e,f)) ){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	}
	return 0;
}