#include <cstdio>

using namespace std;

long long gcd(long long x, long long y)
{
    if (y == 0) return x;
    
    return gcd(y, x % y);
}

long long lcm(long long x, long long y)
{
    return x / gcd(x, y) * y;
}
 
int main() {
	long long a, b;
	
	while (scanf("%lld %lld", &a, &b) != EOF) {
	    printf("%lld %lld\n", gcd(a, b), lcm(a, b));
	}
	
	return 0;
}