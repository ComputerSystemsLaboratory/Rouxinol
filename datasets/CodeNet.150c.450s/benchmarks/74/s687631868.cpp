#include<cstdio>
#include<algorithm>
#define INF (1<<21)
using namespace std;

int C[20], T[50001];
int n, m;

int getTheNumberOfCoin(){
	for (int j=0;j<=n;j++){
		T[j] = INF;
	}
	T[0] = 0;
	for(int i=0;i<=m+1;i++){
		for(int j=C[i];j<=n;j++){
			T[j] = min(T[j], T[j-C[i]] + 1);
		}
	}

	return T[n];
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=0;i<m;i++){
		scanf("%d", &C[i]);
	}

	int ans = getTheNumberOfCoin();

	printf("%d\n", ans);
	return 0;
}