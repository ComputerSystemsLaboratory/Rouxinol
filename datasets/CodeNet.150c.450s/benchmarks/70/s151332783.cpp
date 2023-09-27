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
	int m,d;
	const int day[] = {31,29,31,30,31,30,31,31,30,31,30,31};
	const char *youbi[] = {
		"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
	};
	while(scanf("%d",&m),m){
		scanf("%d",&d);
		int sum = 0;
		rep(i,m-1)sum+=day[i];
		sum += d;
		puts(youbi[(sum+2)%7]);
	}
	return 0;
}