#include <cstdio>
using namespace std;

int main(){
	typedef long long Int;
	
	const int MAX_N = 100;
	int N, A[MAX_N];
	Int table[MAX_N][21];//i番目までの数字を用いてjを作るときに、何通りあるかを、でtable[i][j]表現する
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", A + i);
	}
	
	table[0][A[0]] = 1;
	for(int i = 1; i < N; i++){
		for(int j = 0; j <= 20; j++){
			table[i][j] = ((j - A[i] >= 0)? table[i - 1][j - A[i]] : 0) + ((j + A[i] <= 20)? table[i - 1][j + A[i]] : 0);
		}
	}
	
	printf("%lld\n", table[N - 1][0]);
	
	return 0;
}