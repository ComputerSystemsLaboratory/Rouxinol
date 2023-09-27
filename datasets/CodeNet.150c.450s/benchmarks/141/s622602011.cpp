#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)

static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;
static const double EPS = 1e-6;

double x[3],y[3];
double xp,yp;

double dist(P a,P b){
	return (sqrt((real(a)-real(b))*(real(a)-real(b))+(imag(a)-imag(b))*(imag(a)-imag(b))));
}

double tri_pro(P a,P b,P c){
	double aa,bb,cc;
	aa = dist(b,c);
	bb = dist(c,a);
	cc = dist(a,b);
	double s = (aa+bb+cc)/2.0;
	return sqrt(s*(s-aa)*(s-bb)*(s-cc));
}


int main(){
	while(cin>>x[0]>>y[0]){
		rep(i,2) cin>>x[i+1]>>y[i+1];
		cin>>xp>>yp;
		P a(x[0],y[0]),b(x[1],y[1]),c(x[2],y[2]);
		P p(xp,yp);
		double sa,sb,sc;
		sa = tri_pro(b,c,p);
		sb = tri_pro(c,a,p);
		sc = tri_pro(a,b,p);
		double s = tri_pro(a,b,c);
		//cout<<"s="<<s<<"\nsa sb sc "<<sa<<" "<<sb<<" "<<sc<<endl;
		//printf("s=%.8f\nsa+sb+sc %.8f\n",s,sa+sb+sc);
		if((sa+sb+sc)-s<EPS) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}