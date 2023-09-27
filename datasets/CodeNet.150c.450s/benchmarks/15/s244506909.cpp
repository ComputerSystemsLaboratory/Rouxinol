#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int N, Q;
map<int, int>S;
int main()
{
	int i;
	int S_i;
	int ans = 0;
	int T_i;
	scanf("%d", &N);
	for (i = 0; i < N; i++){
		scanf("%d", &S_i);
		S[S_i] ++;
	}
	scanf("%d", &Q);
	for (i = 0; i < Q; i++){
		scanf("%d", &T_i);
		if (S[T_i] >= 1)ans++;
	}
	printf("%d\n", ans);
	return 0;
}