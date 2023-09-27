#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<stack>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

int main(){
	
	int n;
	cin>>n;
	
	rep(t,n){
		double x[4];
		double y[4];
		
		rep(i,4){
			cin>>x[i]>>y[i];
		}
		
		double dx1 = x[0]-x[1];
		double dx2 = x[2]-x[3];
		
		double dy1 = y[0]-y[1];
		double dy2 = y[2]-y[3];
		
		
		if(dx1==0){
			if(dx2==0)puts("YES");
			else puts("NO");
		}else{
			double a1 = dy1/dx1;
			double a2 = dy2/dx2;
			if(fabs(a1-a2)<0.000000001)puts("YES");
			else puts("NO");
		}
	}
}