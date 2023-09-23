#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

double A,B,C,D,E,F;

int main()
{
	while(~scanf("%lf%lf%lf%lf%lf%lf",&A,&B,&C,&D,&E,&F)){
		double x,y;
		if(A == 0.0){
			y = C / B;
		}
		else if(D == 0.0){
			y = F / E;
		}
		else{
			E -= D / A * B;
			F -= D / A * C;
			D = 0.0;
			y = F / E;
		}
		if(A){
			x = (C - B * y) / A;
		}
		else{
			x = (F - E * y) / D;
		}
		printf("%.3f %.3f\n",x,y);
	}

	return 0;
}