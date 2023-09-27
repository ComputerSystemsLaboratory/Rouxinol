#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
int in() { int x; scanf("%d", &x); return x; }

const double EPS=1e-10;
int sig(double r){return (r<-EPS)?-1:(r>EPS)?1:0;}

struct Pt{
	double x,y;
	Pt(){}
	Pt(double x,double y) : x(x),y(y) {}
	Pt operator+(const Pt &a) const {return Pt(x+a.x,y+a.y);}
	Pt operator-(const Pt &a) const {return Pt(x-a.x,y-a.y);}
	Pt operator*(const Pt &a) const {return Pt(x*a.x-y*a.y,x*a.y+y*a.x);}
	Pt operator-() const {return Pt(-x,-y);}
	Pt operator*(const double &k) const {return Pt(x*k,y*k);}
	Pt operator/(const double &k) const {return Pt(x/k,y/k);}
	double abs() const {return sqrt(x*x+y*y);}
	double abs2()const{return x*x+y*y;}
	double arg()const{return atan2(y,x);}
	double dot(const Pt&a)const{return x*a.x+y*a.y;}
	double det(const Pt&a)const{return x*a.y-y*a.x;}
	bool operator<(const Pt &a)const{return (x!=a.x)?(x<a.x):(y<a.y);}
	bool operator==(const Pt&a)const{return (sig(x-a.x)==0&&sig(y-a.y)==0);}
};
ostream &operator<<(ostream &os,const Pt &a){os<<"("<<a.x<<","<<a.y<<")";return os;}
double tri(Pt a, Pt b, Pt c){return (b-a).det(c-a);}
bool iLS(Pt a,Pt b,Pt c,Pt d){
	return (sig(tri(a,b,c))*sig(tri(a,b,d))<=0);
}
int main() {
	Pt a,b,c,x;
	for(;~scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a.x,&a.y,&b.x,&b.y,&c.x,&c.y,&x.x,&x.y);){
		if(iLS(a,b,c,x)||iLS(a,c,b,x)||iLS(b,c,a,x)){
			puts("NO");
		}else{
			puts("YES");
		}
	}
	return 0;
}