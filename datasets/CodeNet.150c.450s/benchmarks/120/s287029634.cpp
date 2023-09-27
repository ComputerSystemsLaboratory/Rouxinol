#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
#include <sstream>
using namespace std;

#define reep(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n) reep((i),0,(n))
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second
#define mkp make_pair

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vint;
static const int INF=1<<24;

template <class T>
void initvv(vector<vector<T> > &v,int a,int b, const T  &t = T()){
	v.assign(a,vector<T>(b,t));
}

//v.erase(unique(v.begin(),v.end()),v.end());
vector<vint> vv;
int R,C;

int foo2(){
	int ret=0;
	rep(i,C){
		int a=0,b=0;
		rep(j,R){
			if(vv[j][i]==0) a++;
			else b++;
		}
		ret+=max(a,b);
	}
	return ret;
}

int foo1(int r){
	int ret;
	if(r==R){
		return foo2();
	}
	ret = foo1(r+1);
	rep(i,C){
		vv[r][i]=1-vv[r][i];
	}
	ret=max(foo1(r+1),ret);
	rep(i,C){
		vv[r][i]=1-vv[r][i];
	}
	return ret;
}



int main(){
	
	while(cin>>R>>C,R||C){
		initvv(vv,R,C);
		rep(i,R){
			rep(j,C){
				cin>>vv[i][j];
			}
		}
		cout<<foo1(0)<<endl;
	}
}