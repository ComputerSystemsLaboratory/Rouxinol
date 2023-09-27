#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
#include <complex>
#include <utility>
#include <numeric>
#define  rep(i,n) for(int i=0;i<(n);i++)
#define  REP(i,a,n) for(int i=a;i<(n);i++)
#define  rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define  VI	vector<int>
#define	 VS vector<string>
#define  all(a) (a).begin(),(a).end()
#define  debug(x) cout<<#x<<": "<<x<<endl

using namespace std;
typedef long long int ll;
typedef string::const_iterator State;
typedef pair<int,int> P;
class ParseError {};
const ll INF=1LL<<50;
char fi[101][101];
int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
double EPS = 1e-14;
const int MAX_V=100;
const int MAX_N=100;
char o[3]={'+','-','*'};
#define md 1000003



int bow[353][353]={0};
double add(double a,double b){
	if(abs(a+b)<EPS*(abs(a)+abs(b)))
	return 0;
	return a+b;
}

/*struct P{
	double x,y;
	P(){}
		P(double x,double y):x(x),y(y){
		}
		P operator + (P p){
			return P(add(x,p.x),add(y,p.y));
		}
		P operator - (P p){
			return P(add(x,-p.x),add(y,-p.y));
		}
		P operator *(double d){
			return P(x*d,y*d);
		}
		double dot(P p){
			return add(x*p.x,y*p.y);
		}
		double det(P p){
			return add(x*p.y,-y*p.x);
		}
};

bool cmp_x(const P& p,const P& q){
	if(p.x!=q.x) return p.x<q.x;
	return p.y<q.y;
}

vector<P> convex_hull(P* ps, int n){
	sort(ps,ps+n,cmp_x);
	int k=0;
	vector<P> 	qs(n*2);
	
	rep(i,n){
		while(k>1&&(qs[k-1]-qs[k-2]).det(ps[i]-qs[k-1])<=0)
			k--;
		qs[k++]=ps[i];
	}
	for(int i=n-2,t=k;i>=0;i--){
		while(k>t&&(qs[k-1]-qs[k-2]).det(ps[i]-qs[k-1])<=0)
		k--;
		qs[k++]=ps[i];
	}
	qs.resize(k-1);
	return qs;
}

int n,m;
vector<double> p;
P ps[101];
*/
//char c[520][520];
long long mod=1000000007;
long long pow(ll i,ll j){
	ll tmp=1;
	while(j){
		if(j%2) tmp=tmp*i%mod;
		i=i*i%mod;
		j/=2;
	}
	return tmp;
}

int expression(State&);
int term(State&);
int factor(State&);
int number(State&);
int expression(State &begin){
	int ret = term(begin);
	
	for(;;){
		if(*begin == '+'){
			begin++;
			ret += term(begin);
		}
		else if(*begin == '-'){
			begin++;
			ret -= term(begin);
		}
		else
			break;
	}
	return ret;
}

int term(State &begin){
	int ret = factor(begin);
	
	for(;;){
		if(*begin=='*'){
			begin++;
			ret *= factor(begin);
		}
		else if(*begin=='/'){
			begin++;
			ret /= factor(begin);
		}
		else
			break;
	}
	return ret;
}

int factor(State &begin){
	int ret;
	if(*begin == '('){
		begin++;
		ret = expression(begin);
		begin++;
	}
	else
	ret = number(begin);
	
	return ret;

}

int number(State &begin){
	int ret =0;
	
	while(isdigit(*begin)){
		ret*=10;
		ret+=*begin - '0';
		begin++;
	}
	return ret;
}

ll n,ans;

void tansaku(int k,int s,set<int> f){
	
	if(s==0&&k==0)
		ans++;
	else if(s<=0||k<=0){
		return;
	}
	else{
	for(int i=1;i<=n;i++){
		if(f.count(i)==0){
			f.insert(i);
		 tansaku(k-1,s-i,f);
		}
	}
	}

}


int main(void){
	
	ll m,a,b;
	
	while(cin>>m>>a>>b,m!=0||a!=0||b!=0){
		
		vector<ll> t(m);
		ll ma=0,j=0;
		for(int i=0;i<m;i++){
			cin>>t[i];
		}
		sort(t.begin(),t.end());
		
		int k=0;
		for(int i=a;i<=b;i++){
			//cout<<t[t.size()-i]<<" "<<t[t.size()-1-i]<<endl;
			if(ma<=t[t.size()-i]-t[t.size()-i-1]){
				ma=t[t.size()-i]-t[t.size()-i-1];
				k=i;
			}
		}
	cout<<k<<endl;
	}

	
}