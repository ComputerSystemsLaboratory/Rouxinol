#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int main(){
	int n;
	while(scanf("%d",&n),n){
		int sum=0,ans=INT_MIN;
		rep(i,n){
			int t; scanf("%d",&t);
			sum += t;
			ans = max(ans,sum);
			if( sum<0 )sum=0;
		}
		printf("%d\n",ans);
	}
	return 0;
}