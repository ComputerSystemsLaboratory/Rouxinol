#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(){
	double a,b,c,d,e,f;
	double x,y;
	while(cin >> a >> b >> c >> d >> e >> f){
		if(a!=0&&d!=0){
			y = (c/a-f/d)/(b/a-e/d);
			x = (c-b*y)/a;
		}else if(a==0&&d!=0){
			y = b/c;
			x = (f-e*y)/d;
		}else if(a!=0&&d==0){
			y = f/e;
			x = (c-b*y)/a;
		}
		printf("%4.3f %4.3f\n",x,y);
	}
}