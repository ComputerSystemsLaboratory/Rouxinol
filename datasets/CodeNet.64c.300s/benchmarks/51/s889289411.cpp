#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef long long ll;
typedef complex<double> CP;
typedef pair<long long,int> P;
static const int INF=1<<24;

ll n;
ll ans;

int main(){
	cin>>n;
	ans=1;
	rep(i,n){
		ans*=i+1;
	}
	cout<<ans<<endl;
	
	return 0;
}