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

int memo[11][50];
int main(){
	int n,s;
	
	for(int i=0; i<(1<<10); i++){
		int sum = 0;
		int bitc = 0;
		for(int j=0; (1<<j)<=i; j++)if( i&(1<<j) ){
			sum += j;
			bitc++;
		}
		memo[bitc][sum]++;
		//printf("bitc:%d  , sum:%d\n",bitc,sum);
	}
	
	while(scanf("%d%d",&n,&s),n|s){
		printf("%d\n",s<50 ? memo[n][s] : 0);
	}
	return 0;
}