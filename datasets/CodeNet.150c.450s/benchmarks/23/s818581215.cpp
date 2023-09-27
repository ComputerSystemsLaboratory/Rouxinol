#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n;
	int i;
	vector<long long> fib;
	scanf("%d",&n);
	fib.resize(n+1);
	fib[0]=fib[1]=1;
	for(i=2; i<=n; ++i) {
		fib[i]=fib[i-1]+fib[i-2];
	}
	printf("%lld\n",fib[n]);
	return 0;
}