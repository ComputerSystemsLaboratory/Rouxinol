/* All men have limits. They learn what they are and learn
   not to exceed them, I ignore mine. -Batman           */
#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <Windows.h>
using namespace std;

int main(){
int a,b,c,d,e,f;
double x,y;
while(cin>>a>>b>>c>>d>>e>>f){
	x=(double)(c*e-f*b)/(a*e-d*b);
	y=(double)(c*d-f*a)/(b*d-e*a);
	if(x>-0.001&&y>-0.001)printf("%.3lf %.3lf\n",abs(x),abs(y));
	else if(x>-0.001)printf("%.3lf %.3lf\n",abs(x),y);
	else if(y>-0.001)printf("%.3lf %.3lf\n",x,abs(y));
	else printf("%.3lf %.3lf\n",x,y);
		
}
return 0;
}