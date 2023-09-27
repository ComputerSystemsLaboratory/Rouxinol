#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
double a,b,c;//ax+by+c=0
double x[4],y[4];//p,1,2,3
void make_line(double x1,double y1,double x2,double y2){
	if(x1!=x2&&y1!=y2){
		a=(y1-y2)/(x1-x2);
		b=-1;
		c=-a*x1+y1;
	}else if(x1==x2){
		a=1;
		b=0;
		c=-x1;
	}else if(y1==y2){
		a=0;
		b=1;
		c=-y1;
	}
	return;
}
bool check(int p,int q,int r){
	make_line(x[p],y[p],x[q],y[q]);//line pq
	if((a*x[r]+b*y[r]+c)*(a*x[0]+b*y[0]+c)<=0)return false;
	return true;
}

int main()
{
	while(cin>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]>>x[0]>>y[0]){
		bool ans=true;
		ans&=check(1,2,3);
		ans&=check(2,3,1);
		ans&=check(3,1,2);
		printf(ans?"YES\n":"NO\n");
	}
    return 0;
}