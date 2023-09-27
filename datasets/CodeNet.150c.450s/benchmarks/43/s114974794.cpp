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

int main(){
	int n;
	while(cin>>n,n){
		int a=0,b=0;
		FOR(i,n){
			int x,y; cin>>x>>y;
			if(x>y) a+=x+y;
			else if(x<y) b+=x+y;
			else a+=x,b+=y;
		}
		printf("%d %d\n",a,b);
	}
    return 0;
}