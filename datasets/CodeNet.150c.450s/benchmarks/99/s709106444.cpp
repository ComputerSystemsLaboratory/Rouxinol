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
#include <cstdio>
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
bool isnum(char t){
	if(t>='0'&&t<='9') return true;
	return false;
}
int aaa;
vint maa(26);

int foo1(string a){
	int c=1;
	int ret=0;
	rep(i,a.size()){
		if(isnum(a[i])){
			c=a[i]-'0';
		}
		else{
			ret+=c*maa[a[i]-'a'];
			c=1;
		}
	}
	return ret;
}
vector<char> tt(1001);
string foo2(int a){
	// cout<<"a "<<a<<endl;
	string ret;
	stringstream ss;
	int c = 1000;
	bool f=false;
	while(1){
		if(a>=c){
			int t=a/c;
			//cout<<t<<endl;
			if(t>1) ss<<t;
			ss<<tt[c];
			a%=c;
			f=true;
		}
		//else if(f) ss<<0;
		if(c==1) break;
		c/=10;
	}
	ss>>ret;
	return ret;
}
int main(){
	maa['m'-'a']=1000;
	maa['c'-'a']=100;
	maa['x'-'a']=10;
	maa['i'-'a']=1;
	tt[1]='i';
	tt[10]='x';
	tt[100]='c';
	tt[1000]='m';
	int n;
	cin>>n;
	rep(i,n){
		string s1,s2;
		cin>>s1>>s2;
		// cout<<foo1(s1)<<" "<<foo1(s2)<<endl;
		cout<<foo2(foo1(s1)+foo1(s2))<<endl;
	}
	return 0;
}