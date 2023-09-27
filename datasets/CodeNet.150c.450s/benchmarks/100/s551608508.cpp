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
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

long long fact(long long n){
	return n==1LL ? 1LL : fact(n-1)*n;
}
int main(){
	long long n; scanf("%lld",&n);
	printf("%lld\n",fact(n));
	return 0;
}