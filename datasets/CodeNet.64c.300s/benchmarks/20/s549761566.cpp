#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int d;
	while(scanf("%d", &d) != EOF){
		int ans = 0;
		for(int i=0; i<600; i+=d)
			ans += i*i;
		printf("%d\n", ans*d);
	}

	return 0;
}