#include <cstdio>
#include <algorithm>
#include <valarray>

#define rep(i, n) for(int i = 0; i < n; ++i)

using namespace std;

int n;
valarray<long long> a;

int main(){
	scanf("%d", &n);
	a.resize(n);
	rep(i, n){
		scanf("%lld", &a[i]);
	}
	printf("%lld %lld %lld\n", a.min(), a.max(), a.sum());
	return 0;
}