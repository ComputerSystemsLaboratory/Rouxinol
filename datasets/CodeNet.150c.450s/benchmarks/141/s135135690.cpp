#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)


#define X real()
#define Y imag()
typedef complex<double> P;
double cross(P a,P b){return a.X*b.Y-a.Y*b.X;}
bool ccw(P a,P b,P c){return cross(b-a,c-a)>=0;}

int main(){
	
	double xa,ya,xb,yb,xc,yc,xp,yp;
	while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc,&xp,&yp)!=EOF){
		P a = P(xa,ya);
		P b = P(xb,yb);
		P c = P(xc,yc);
		P p = P(xp,yp);
		
		if(!ccw(a,b,c)){
			swap(b,c);
		}
		
		if(!ccw(a,b,p)||!ccw(b,c,p)||!ccw(c,a,p))puts("NO");
		else puts("YES");
	}
}