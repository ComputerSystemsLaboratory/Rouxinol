
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>

using namespace std;

double dot(double x1,double y1,double x2,double y2){return x1*y2 - x2*y1;}

int main(){
	int t;
	cin>>t;
	while(t--){
		double x[4],y[4];
		for (int i = 0; i < 4; i++)
		{
			cin>>x[i]>>y[i];
		}

		double ans = dot(x[1] - x[0],y[1]-y[0],x[3]-x[2],y[3]-y[2]);
		if(-1e-8 <= ans && ans <= 1e-8) puts("YES");
		else puts("NO");
	}

	return 0;
}