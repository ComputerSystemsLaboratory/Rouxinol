#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int a;
	long sum = 0;
	int m = 1000000, M = -1000000;
	for(int i = 0; i < n; i++){
		scanf("%d", &a);
		M = max(M, a);
		m = min(m, a);
		sum += a;
	}
	printf("%d %d %ld\n", m, M, sum);
	
	return 0;
}