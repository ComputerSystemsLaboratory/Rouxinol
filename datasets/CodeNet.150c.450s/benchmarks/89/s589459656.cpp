#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <map>
#include <climits>
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

vint a(1000010,1);
int main(){
	a[0]=a[1]=0;
	for(int i=0;i*i<1000010;i++){
		if(a[i]){
			for(int j=i*i;j<1000010;j+=i){
				a[j]=0;
			}
		}
	}
	int b,d,n;
	while(cin>>b>>d>>n,b&&d&&n){
		while(n){
			if(a[b]) n--;
			if(!n) cout<<b<<endl;
			b+=d;
		}
	}
	return 0;
	
}