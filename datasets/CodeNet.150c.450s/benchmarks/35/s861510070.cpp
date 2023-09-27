#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	const int MAX_n = 5000;
	int n, a[MAX_n + 1], z, beg, res;
	
	while(true){
		scanf("%d", &n);
		
		if(n == 0) return 0;
		
		a[0] = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d", &z);
			a[i] = z + a[i - 1];
		}
		
		beg = 0;
		res = -100000;
		for(int i = 1; i <= n; i++){
			beg = min(beg, a[i - 1]);
			res = max(res, a[i] - beg);
		}
		
		printf("%d\n", res);
	}
}