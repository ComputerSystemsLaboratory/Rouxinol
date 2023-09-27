#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 2000000 + 5;
const int maxm = 10000 + 5;

int n;
int A[maxn],B[maxn],C[maxm];

void Counting_Sort(int left,int right){
	for(int i = left;i <= right; i++)C[A[i]]++;
	for(int i = 1;i <= maxm; i++)C[i] += C[i-1];
	for(int i = left;i <= right; i++){
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
}

int main(){
	scanf("%d",&n);
	for(int i = 1;i <= n; i++)scanf("%d",&A[i]);
	Counting_Sort(1,n);
	for(int i = 1;i <= n; i++){
		if(i != 1)printf(" ");
		printf("%d",B[i]);
	}
	printf("\n");
}