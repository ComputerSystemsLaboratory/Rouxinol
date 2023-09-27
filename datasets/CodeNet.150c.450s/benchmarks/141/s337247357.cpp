#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string.h>
#include <bitset>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <utility>
#include <queue>
#include <cmath>
#define mp make_pair
#define pii pair<long long int,long long int> 
#define ff first
#define pb push_back
#define ss second
#define ll long long 
#define ull unsigned long long
#define vi vector<long long int>
#define vii vector<pii>
#define vvi vector <vi>
#define rep(x,a,b,c) for(int x=a;x<=b;x+=c)
#define repp(x,a,b) rep(x,a,b,1)
#define rev(x,a,b,c) for(int x=a;x>=b;x-=c)
#define revv(x,a,b) rev(x,a,b,1)
#define OO (int)2e9
#define INF (ll)1e18
#define EPS (double)1e-5
 
using namespace std;

double x[5],y[5],xx,yy,a,b,c,d,e,f,s,s1,s2,s3,aa,a1,a2,a3;

int main()
{
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&xx,&yy)!=EOF)
	{
		a=sqrt((x[2]-x[1])*(x[2]-x[1])+(y[2]-y[1])*(y[2]-y[1]));
		b=sqrt((x[2]-x[3])*(x[2]-x[3])+(y[2]-y[3])*(y[2]-y[3]));
		c=sqrt((x[3]-x[1])*(x[3]-x[1])+(y[3]-y[1])*(y[3]-y[1]));
		d=sqrt((xx-x[1])*(xx-x[1])+(yy-y[1])*(yy-y[1]));
		e=sqrt((xx-x[2])*(xx-x[2])+(yy-y[2])*(yy-y[2]));
		f=sqrt((xx-x[3])*(xx-x[3])+(yy-y[3])*(yy-y[3]));
		s=(a+b+c)/(double)2;
		s1=(a+d+e)/(double)2;
		s2=(b+e+f)/(double)2;
		s3=(c+d+f)/(double)2;
		aa=sqrt(s*(s-a)*(s-b)*(s-c));
		a1=sqrt(s1*(s1-a)*(s1-d)*(s1-e));
		a2=sqrt(s2*(s2-b)*(s2-e)*(s2-f));
		a3=sqrt(s3*(s3-c)*(s3-d)*(s3-f));
		if(abs(aa-a1-a2-a3)<=0.0001)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}