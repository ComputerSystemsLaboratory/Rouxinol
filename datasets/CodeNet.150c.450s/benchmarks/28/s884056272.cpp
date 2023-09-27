#include <cstdio>
using namespace std;

const int MAX_N = 100000, INF = 1000000000;
int n, k, w[MAX_N + 1], lb = 0, ub = INF, mid;

bool judge(int border){
	int sum = 0, i = 0;
	for(int count = k; count > 0 && i < n; count--){
		for(;sum + w[i] <= border && i < n; i++){
			sum += w[i];
		}
		sum = 0;
	}
	if(i < n){
		return 0;
	}
	return 1;
}

int main() {
	scanf("%d%d", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d",&w[i]);
	}
	
	while(ub - lb > 1){
		mid = (ub + lb) / 2;
		
		if(judge(mid)){
			ub = mid;
		} else{
			lb = mid;
		}
	}
	
	printf("%d\n", ub);
	return 0;
}