#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){
	long long a, b, c, d, e, f;
	long long p, q, r;
	long long x, y, z;
	for (; scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f) !=EOF;){
		c = c * 1000;
		f = f * 1000;
		p = (a*e) - (d*b);
		q = (c*e) - (f*b);
		x = q / p;
		p = (b*d) - (e*a);
		q = (c*d) - (f*a);
		y = q / p;
		if (x < 0){
			printf("-");
			x = -x;
		}
			printf("%lld.%03lld ", x / 1000, x % 1000);
			if (y < 0){
				printf("-");
				y = -y;
			}
		printf("%lld.%03lld\n", y / 1000, y % 1000);
	}
		return 0;
	}