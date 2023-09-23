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
	bool a[30] = { false };
	int b;
	REP(i, 28) { in >> b; a[b - 1] = true; }
	REP(i, 30)if (!a[i])out << i + 1 << endl;
}