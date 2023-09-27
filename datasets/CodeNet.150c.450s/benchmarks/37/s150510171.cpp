#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	/*ax+by=c
	 *dx+ey=f
	 *
	 *aex+bey=ce
	 *bdx+bey=bf
	 *(ae-bd)x=ce-bf
	 *x=(ce-bf)/(ae-bd)
	 *
	 *adx+bdy=dc
	 *adx+aey=af
	 *(bd-ae)y=dc-af
	 *y=(dc-af)/(bd-ae)*/
	int a,b,c,d,e,f;
	while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){
		printf("%.3lf %.3lf\n",(double)(c*e-b*f)/(a*e-b*d)+0.00049999,(double)(d*c-a*f)/(b*d-a*e)+0.00049999);
	}
	return 0;
}