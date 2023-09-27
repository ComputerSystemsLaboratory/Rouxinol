#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define EPS (1e-10)
#define rep(i,n) for(int i=0;i<n;i++)
typedef complex<double> P;

double x,y,xx,yy,xxx,yyy,xxxx,yyyy;

double cross(P a, P b) {
  return (a.real() * b.imag() - a.imag() * b.real());
}

int main(){
	while(cin>>x>>y>>xx>>yy>>xxx>>yyy>>xxxx>>yyyy){
		P a=P(x,y),b=P(xx,yy),c=P(xxx,yyy),p=P(xxxx,yyyy);
		int C=cross(p-a,b-a)>0&&cross(p-b,c-b)>0&&cross(p-c,a-c)>0||cross(p-a,b-a)<0&&cross(p-b,c-b)<0&&cross(p-c,a-c)<0;
		cout<<(C?"YES":"NO")<<endl;
	}
}