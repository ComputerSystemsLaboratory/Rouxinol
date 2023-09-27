#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <functional>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	int a[5];
	while(1){
		rep(i, 5){
			if(scanf("%d", &a[i]) == EOF)
				return 0;
		}
		sort(a, a+5, greater<int>());
		rep(i, 5){
			printf("%d", a[i]);
			if(i<4) printf(" ");
		}

		puts("");
	}
}