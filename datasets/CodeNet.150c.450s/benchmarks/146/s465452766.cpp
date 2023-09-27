#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<25;
const double pi=acos(-1);
const double eps=1e-10;
const vi emp;

double add_double(double a,double b){
	if(abs(a+b)<eps*(abs(a)+abs(b))) return 0;
	return a+b;
}

struct point{
	double x,y;
	point operator+(point p){
		return point{add_double(x,p.x),add_double(y,p.y)};
	}
	point operator-(point p){
		return point{add_double(x,-p.x),add_double(y,-p.y)};
	}
	point operator*(double p){
		return point{x*p,y*p};
	}
	point operator/(double p){
		if(!p) return point{0,0}; 
		return point{x/p,y/p};
	}
	bool operator==(point p){
		return fabs(add_double(x,-p.x))<eps&&fabs(add_double(y,-p.y))<eps;
	}
	bool operator<(point p){
		if(fabs(x-p.x)>eps) return x<p.x;
		return y<p.y;
	}
};

typedef pair<point,point> pp;
typedef vector<point> VP;
const point O{0,0};

class Geom{
	public:
	double Length(point x,point y){
		point z=y-x;
		return sqrt(z.x*z.x+z.y*z.y);
	}
	double IP(point p,point q){
		return p.x*q.x+p.y*q.y;
	}
	double CP(point p,point q){
		return p.x*q.y-q.x*p.y;
	}
	string Counter_Clockwise(pp a,point x){
		point A=a.second-a.first;
		point X=x-a.first;
		double ip=IP(A,X),cp=CP(A,X),Al=Length(O,A),Xl=Length(O,X);
		if(cp>eps) return "Counter_Clockwise";
		if(cp<-eps) return "Clockwise";
		if(ip<-eps) return "Online_Back";
		if(Xl<Al||fabs(Xl-Al)<eps) return "On_Segment";
		return "Online_Front";
	}
	string Parallel_Orthogonal(pp a,pp b){
		point A=a.second-a.first,B=b.second-b.first;
		double ip=IP(A,B),cp=CP(A,B);
		string f=Counter_Clockwise(pp(a.first,a.second),b.first),s=Counter_Clockwise(pp(a.first,a.second),b.second);
		if(f[0]!='C'&&s[0]!='C') return "Agreement";
		if(fabs(cp)<eps) return "Parallel";
		if(fabs(ip)<eps) return "Orthogonal";
		else return "Commonly";
	}
	void Point_in(point& p){
		cin>>p.x>>p.y;
	}
};

int n;
VP p(4);
string s;

int main(){
	Geom geo;
	cin>>n;
	for(int i=0;i<n;i++){
		for(VP::iterator j=p.begin();j!=p.end();j++) geo.Point_in(*j);
		s=geo.Parallel_Orthogonal(pp(p[0],p[1]),pp(p[2],p[3]));
		if(s[0]=='P'||s[0]=='A') cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}