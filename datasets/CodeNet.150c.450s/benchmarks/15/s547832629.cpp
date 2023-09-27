#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;

int search(int A[], int n, int key){
	A[n] = key;
	int i = 0;
	while (A[i] != key){
		i++;
	}
	return i != n;
}

int main(){
	int A[10001], q, n, key, cnt=0;
	
	scanf("%d", &n);

	for (int i=0; i<n; i++){
		scanf("%d", &A[i]);
	}

	scanf("%d", &q);
	for (int i=0; i<q; i++){
		scanf("%d", &key);
		if (search(A, n, key)) cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}