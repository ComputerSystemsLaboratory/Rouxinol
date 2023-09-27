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
	int n,m;
	int taro[128],hana[128],sumt,sumh;
	while(scanf("%d%d",&n,&m),n|m){
		sumt=sumh=0;
		rep(i,n){ scanf("%d",taro+i); sumt+=taro[i]; }
		rep(i,m){ scanf("%d",hana+i); sumh+=hana[i]; }
		int k = INT_MAX;
		int ta,ha;
		rep(i,n) rep(j,m) if( sumt-taro[i]+hana[j]==sumh-hana[j]+taro[i] ){
			if( k>taro[i]+hana[j] ){
				k = taro[i]+hana[j];
				ta = taro[i];
				ha = hana[j];
			}
		}
		if( k==INT_MAX ){
			puts("-1");
		}else{
			printf("%d %d\n",ta,ha);
		}
	}
	return 0;
}