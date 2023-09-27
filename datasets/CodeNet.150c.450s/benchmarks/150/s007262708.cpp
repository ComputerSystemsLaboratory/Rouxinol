#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int INF = 0x3f3f3f3f;

int A[2000005], B[2000005], C[10005];

int main(){
	int n, temp = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)	scanf("%d", A + i);
	for(int i = 1; i <= n; i++)	C[A[i]]++;
	for(int i = 0; i < 10000; i++){
		temp += C[i];
		C[i] = temp;
	}
	for(int i = n; i > 0; i--){
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
	for(int i = 1; i <= n; i++){
		if(i > 1)
			printf(" ");
		printf("%d", B[i]);
	}
	printf("\n");
	return 0;
}