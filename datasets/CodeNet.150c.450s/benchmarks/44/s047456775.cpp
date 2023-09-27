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
	int a[4];
	while(1){
		rep(i, 4){
			if(scanf("%d", &a[i]) == EOF)
				return 0;
		}

		int hit=0, blow=0;
		rep(i, 4){
			int b;
			scanf("%d", &b);
			rep(j, 4) (i==j ? hit : blow) += a[j] == b;
		}

		printf("%d %d\n", hit, blow);
	}

	return 0;
}