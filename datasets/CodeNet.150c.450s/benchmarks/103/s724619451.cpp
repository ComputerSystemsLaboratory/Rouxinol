#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <map>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;
int n, s;

int solve(int remain, int k, int depth)
{
	if(depth == n)
		return remain == 0;

	int ans = 0;
	reep(i, k, min(10, remain+1)){
		ans += solve(remain-i, i+1, depth+1);
	}
	return ans;
}

int main()
{
	while(scanf("%d %d", &n, &s), n||s){
		printf("%d\n", solve(s, 0, 0));
	}

	return 0;
}