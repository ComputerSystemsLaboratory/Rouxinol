#include <iostream>
#include <stack>
#include <stdio.h>
#include <cmath>
using namespace std;
double x[4],y[4];//p,1,2,3
double a[2],b[2],c[2];
void make_line(double x1,double y1,double x2,double y2,int num){
	if(x1!=x2&&y1!=y2){
		a[num]=(y1-y2)/(x1-x2);
		b[num]=-1;
		c[num]=-a[num]*x1+y1;
	}else if(x1==x2){
		a[num]=1;
		b[num]=0;
		c[num]=-x1;
	}else if(y1==y2){
		a[num]=0;
		b[num]=1;
		c[num]=-y1;
	}
	return;
}
int main()
{
	int n;
	cin>>n;
	while(n--){
		bool ans=false;
		cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
		make_line(x[0],y[0],x[1],y[1],0);
		make_line(x[2],y[2],x[3],y[3],1);
		if(a[0]==0){
			ans=(a[1]==0);
		}else if(abs((b[0]/a[0])-(b[1]/a[1]))<0.00000001){
			ans=true;
		}
		printf(ans?"YES\n":"NO\n");
	}
    return 0;
}