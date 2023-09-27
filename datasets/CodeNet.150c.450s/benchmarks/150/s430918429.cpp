#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxx = 2000001;
const int maxnum = 10010;
int A[maxx], B[maxx];
int C[maxnum];

int main() {
	int n;
	scanf("%d", &n);

	//????§????C??°???
	for (int i = 0; i < maxnum; i++)
		C[i] = 0;

	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i + 1]);
		//?????°??°C??°???
		C[A[i + 1]]++;
	}

	// ?´???????
	for (int i = 1; i < maxnum; i++)
		C[i] += C[i - 1];

	for (int j = 1; j <= n; j++) {
		B[C[A[j]]] = A[j];
		C[A[j]] --;
	}
	for (int i = 1; i <= n; i++)
		printf("%d%c", B[i], i == n ? '\n' : ' ');

	return 0;
}