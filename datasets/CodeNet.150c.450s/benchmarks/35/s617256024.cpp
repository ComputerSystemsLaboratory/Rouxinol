#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int n;
	while(scanf("%d", &n), n){
		vi array(n+1);
		array[0] = 0;
		reep(i, 1, n+1){
			scanf("%d", &array[i]);
			array[i] += array[i-1];
		}

		int ans = INT_MIN;
		rep(i, n){
			reep(j, i+1, n+1)
				ans = max(ans, array[j]-array[i]);
		}

		printf("%d\n", ans);
	}

	return 0;
}