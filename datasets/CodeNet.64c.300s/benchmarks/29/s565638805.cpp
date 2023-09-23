#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

#define EPS 1e-7

int main(){
	int e;
	while(scanf("%d", &e), e != 0){
		int ans = e;
		int k;
		for(int z = 0; (k = e - z * z * z) >= 0; ++z){
			int y = (int)(sqrt(k) + EPS);
			int x = k - y * y;
			ans = min(ans, x + y + z);
		}
		printf("%d\n", ans);
	}
}