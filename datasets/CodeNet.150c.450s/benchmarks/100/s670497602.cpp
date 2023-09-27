#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int n; scanf("%d",&n);
	long long x = 1;
	while(n>1)x*=n--;
	printf("%lld\n",x);
	return 0;
}