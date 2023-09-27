#include<stdio.h>
#define MAX 20

int A[MAX],n;

bool check(int i,int m){
	if (m == 0)return 1;
	if (i >= n)return 0;
	int res = check(i + 1, m) || check(i + 1, m - A[i]);
	return res;
}

int main(){
	int q, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	scanf("%d", &q);
	for (int i = 0; i < q; i++){
		scanf("%d", &m);
		if (check(0,m)){
			printf("yes\n");
		}
		else{
			printf("no\n");
		}
	}
}