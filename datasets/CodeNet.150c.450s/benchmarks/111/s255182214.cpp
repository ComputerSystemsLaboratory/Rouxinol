#include <cstdio>
#include <cstring>
using namespace std;

#define MAX_N 100
typedef long long Int;
int N, A[MAX_N];
Int table[MAX_N][21];

Int dp(int p, int res){
	if(res > 20 || res < 0) return 0;
	if(p == N - 1){
		return (res == A[p])? 1 : 0;
	}
	if(table[p][res] > -1) return table[p][res];
	return table[p][res] = (p != 0)? dp(p + 1, res + A[p]) + dp(p + 1, res - A[p]) : dp(p + 1, res + A[p]);
}

int main(){
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", A + i);
	}
	
	memset(table, -1, sizeof(table));
	
	printf("%lld\n", dp(0, 0));
	
	return 0;
}