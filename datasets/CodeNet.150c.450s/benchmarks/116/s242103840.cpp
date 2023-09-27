#include <cstdio>
using namespace std;

int max(int a, int b){
	if(a > b) return a;
	else return b;
}

int main(){
	const int MAX_N = 100000;
	int n, a[MAX_N], k, S, S1, S2;
	int p;
	
	while(true){
		scanf("%d%d", &n, &k);
		if(n == 0 && k == 0) break;
		for(int i = 0; i < n; i++) scanf("%d", &a[i]);
		
		S = 0;
		for(p = 0; p < k; p++){
			S += a[p];
		}
		S1 = S;
		
		while(p < n){
			S2 = S1 + a[p] - a[p - k];
			
			S = max(S, S2);
			
			S1 = S2;
			
			p++;
		}
		
		printf("%d\n", S);
	}
	
	return 0;
}