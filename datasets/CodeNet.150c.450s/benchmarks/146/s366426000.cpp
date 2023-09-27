#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

const double eps=1e-8;

int main(){
	int n;
	scanf(" %d", &n);
	for(int i=0; i<n; ++i){
		double x[4], y[4];
		for(int j=0; j<4; ++j) scanf(" %lf %lf", &x[j], &y[j]);
		
		double dx1=x[1]-x[0], dx2=x[3]-x[2], dy1=y[1]-y[0], dy2=y[3]-y[2];
		bool ans=true;
		if(dx1==0){
			if(dx2!=0) ans=false;	
		}
		else{
			double a=dx2/dx1, b=dy2/dy1;
			if(fabs(a-b)>eps) ans=false; 
		}
		
		if(ans) printf("YES\n");
		else printf("NO\n");
	}
}