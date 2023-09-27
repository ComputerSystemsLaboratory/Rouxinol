#include <bits/stdc++.h>
#define int long long
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF LLONG_MAX
#define eps LDBL_EPSILON
#define moder 1000000007
#define pie 3.141592653589793238462643383279
#define P std::pair<int,int>
#define prique priority_queue
using namespace std;
bool kosa(double ax,double ay,double bx,double by,double cx,double cy,double dx,double dy){
	double ta=(cx-dx)*(ay-cy)+(cy-dy)*(cx-ax);
	double tb=(cx-dx)*(by-cy)+(cy-dy)*(cx-bx);
	double tc=(ax-bx)*(cy-ay)+(ay-by)*(ax-cx);
	double td=(ax-bx)*(dy-ay)+(ay-by)*(ax-dx);
	return tc*td<0&&ta*tb<0;
}
signed main(){
	double a,b,c,d,e,f,g,h;
	while(cin>>a>>b>>c>>d>>e>>f>>g>>h){
		if(kosa(a,b,a+(g-a)*10000,b+(h-b)*10000,c,d,e,f)&&
		kosa(c,d,c+(g-c)*10000,d+(h-d)*10000,a,b,e,f)&&
		kosa(e,f,e+(g-e)*10000,f+(h-f)*10000,a,b,c,d))puts("YES");
		else puts("NO");
	}
	return 0;
}
