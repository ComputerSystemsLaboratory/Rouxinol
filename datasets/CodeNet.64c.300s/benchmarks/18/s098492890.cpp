#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <utility>
#include <set>
#include <cmath>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pi acos(-1)
#define all(v) v.begin(),v.end()
#define EPS (1e-10)
#define EQ(a,b) (abs((a)-(b))<EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))
using namespace std;
typedef pair<int,int> point;
typedef complex<double> P;
typedef long long ll;

const double eps = 1e-8;
const double INF = 1e12;


double dot(P a,P b){
	return a.real()*b.real()+a.imag()*b.imag();
}
double cross(P a,P b){
	return a.real()*b.imag()-a.imag()*b.real();
}

bool is_orthogonal(P a1,P a2,P b1,P b2){
	return EQ(dot(a1-a2,b1-b2),0.0);
}
bool is_parallel(P a1,P a2,P b1,P b2){
	return EQ(cross(a1-a2,b1-b2),0.0);
}

bool is_point_on_line(P a,P b,P c){
	return EQ(cross(b-a,c-a),0.0);
}

bool is_point_on_linesegment3(P a,P b,P c){
	//|a-c| + |c-b|<=|a-b| ???????????????
	return (abs(a-c)+abs(c-b)<abs(a-b)+EPS);
}

double distance_l_p(P a,P b,P c){
	return abs(cross(b-a,c-a))/abs(b-a);
}


double distance_ls_p(P a,P b,P c){
	if(dot(b-a,c-a)<EPS)return abs(c-a);
	if(dot(a-b,c-b)<EPS)return abs(c-b);
	return abs(cross(b-a,c-a))/abs(b-a);
}

int main(){
	long long dt[50];
	rep(i,50)dt[i]=0;
	dt[1]=1;
	dt[2]=1;
	dt[3]=1;
	rep(i,30){
		dt[i+1]+=dt[i];
		dt[i+2]+=dt[i];
		dt[i+3]+=dt[i];
	}
	int n;
	while(cin>>n,n){
		if(dt[n]%3650!=0)cout<<dt[n]/3650+1<<endl;
		else cout<<dt[n]/3650<<endl;
	}
	return 0;
}