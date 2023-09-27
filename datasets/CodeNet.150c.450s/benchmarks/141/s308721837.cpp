#include <bits/stdc++.h>
using namespace std;

int main() {
	
	double x1,x2,x3,y1,y2,y3,xp,yp;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>xp>>yp){
		
		double o1,o2,o3;
		o1=(x2-x1)*(yp-y2)-(y2-y1)*(xp-x2);
		o2=(x3-x2)*(yp-y3)-(y3-y2)*(xp-x3);
		o3=(x1-x3)*(yp-y1)-(y1-y3)*(xp-x1);
		if((o1>0 && o2>0 && o3>0)||(o1<0 && o2<0 && o3<0)){
			printf("YES\n");
		}else{
	 		printf("NO\n");
		}
	}
}