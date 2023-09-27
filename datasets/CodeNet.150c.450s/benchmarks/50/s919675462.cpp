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
	int n;
	while (in >> n) {
		if (!n)break;
		int a = 1000 - n,ans=0;
		int c[5] = { 500, 100, 50, 10, 5 };
		REP(i, 5) {
			ans += a / c[i];
			a %= c[i];
		}
		out << ans + a << endl;
	}
	return 0;

}