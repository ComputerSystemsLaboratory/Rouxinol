// #pragma comment(linker, "/STACK:1024000000,1024000000")
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
// #define DEBUG
#ifdef DEBUG
#define debug(...) printf( __VA_ARGS__ )
#else
#define debug(...)
#endif
#define MEM(x,y) memset(x, y,sizeof x)
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> ii;
const int inf = 1 << 30;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
vector<int> vec;
int a[999999 + 10];
void init(){
	memset(a,0,sizeof a);
	for (int i = 2;i <=  999999 + 9;++i){
		if (a[i] == 0){
			vec.push_back(i);
			for (int j = i + i;j <=  999999 + 9;j += i){
				a[j] = 1;
			}
		}
	}
}
int main()
{	
	// freopen("in.txt","r",stdin);
	// freopen("out.txt","w",stdout);
	int n;
	init();
	while(scanf("%d",&n) != EOF){
		int ans = upper_bound(vec.begin(), vec.end(),n) - vec.begin();
		cout << ans << endl;
	}
	return 0;
}