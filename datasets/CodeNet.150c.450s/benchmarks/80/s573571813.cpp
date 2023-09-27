#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <limits>
typedef long long ll;
#define REP(i,n)   for(int i=0; i<(int)(n); ++i)
#define FOR(i,b,e) for(int i=(b); i<=(int)(e); ++i)

#define in cin
#define out cout
#define pb push_back
using namespace std;

int main(){
	int a = 0, b = 0,tmp;
	REP(j, 4) {
		in >> tmp;
		a += tmp;
	}
	REP(i, 4) {
		in >> tmp;
		b += tmp;
	}
	int ans=a;
	if (a < b)ans = b;
	out << ans << endl;
	return 0;

}