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
	int a[4],b[4];
	while(~scanf("%d%d%d%d",a,a+1,a+2,a+3)){
		scanf("%d%d%d%d",b,b+1,b+2,b+3);
		int hit=0,bro=0;
		rep(i,4)if( a[i]==b[i] ){
			hit++;
		}
		rep(i,4){
			rep(j,4){
				if( i!=j ){
					if( b[i]==a[j] )bro++;
				}
			}
		}
		printf("%d %d\n",hit,bro);
	}
	return 0;
}