#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

#define MAX 10000
vector<int> A,B(2000000,0),C(MAX,0);

int main(){
	int n,temp;
	
	scanf("%d",&n);
	A.push_back(0);
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		A.push_back(temp);
	}
	for(int i=1;i<=n;i++){
		C[A[i]]++;
	}
	for(int i=1;i<MAX;i++){
		C[i]=C[i]+C[i-1];
	}
	for(int i=1;i<=n;i++){
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
	printf("%d",B[1]);
	for(int i=2;i<=n;i++){
		printf(" %d",B[i]);
	}
	printf("\n");
}