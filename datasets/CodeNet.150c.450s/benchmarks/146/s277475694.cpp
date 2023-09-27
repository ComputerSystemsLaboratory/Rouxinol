#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

const double ESP=1e-10;

double x[4],y[4];

int main(){
	int n;
	scanf("%d",&n);
	REP(i,n){
		REP(j,4){
			scanf("%lf %lf",&x[j],&y[j]);
		}
		if (fabs(x[0]-x[1])<=ESP || fabs(x[2]-x[3])<=ESP){
			if (fabs(x[0]-x[1])<=ESP && fabs(x[2]-x[3])<=ESP){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
			if (fabs((y[0]-y[1])/(x[0]-x[1])-(y[2]-y[3])/(x[2]-x[3]))<=ESP){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
	}
	return 0;
}