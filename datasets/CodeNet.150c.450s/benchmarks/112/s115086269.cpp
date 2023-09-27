#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>
#include <iterator>
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
 
#define FOR(i,n) for(int i = 0; i < (n); i++)
#define sz(c) ((int)c.size())

typedef unsigned long long ull;
const int INF = (int)1e8;

char t[256];

int main(){
	int n;
	while(cin>>n,n){
		FOR(i,256) t[i] = i;
		FOR(i,n){ 
			char a,b; scanf(" %c %c",&a,&b);
			t[a] = b;
		}
		int m; cin>>m;
		FOR(i,m){
			char c;
			scanf(" %c",&c);
			putchar(t[c]);
		}
		puts("");
	}
    return 0;
}