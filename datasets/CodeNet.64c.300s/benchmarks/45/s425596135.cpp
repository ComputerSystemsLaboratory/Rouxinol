#include <cstdio>
using namespace std;

int main(void){
	int N, M, P;
	int sum, ans;
	int X[1001];
	while((scanf("%d %d %d", &N, &M, &P) != EOF) && (N != 0 || M != 0 || P != 0)){
		sum = 0;
		for(int i = 0; i < N; i++){
			scanf("%d", X+i);
			sum += X[i];
		}

		P = 100 - P;

		if(X[M-1] == 0)	ans = 0;
		else ans = sum * P / X[M-1];

		printf("%d\n", ans);
	}
  return 0;
}