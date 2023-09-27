#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int main()
{
	double x1,y1,x2,y2,x3,y3,xp,yp;
	while(~scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&xp,&yp)){
		double a = (x2 - x1) * (yp - y1) - (xp - x1) * (y2 - y1);
		double b = (x3 - x2) * (yp - y2) - (xp - x2) * (y3 - y2);
		double c = (x1 - x3) * (yp - y3) - (xp - x3) * (y1 - y3);
		if(a > 0 == b > 0 && b > 0 == c > 0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}

	return 0;
}