#include<stdio.h>

int main(){
	int n;
	int A=0;
	int B=0;
	int i=0;
	while(1){
	A=0;
	B=0;
	scanf("%d", &n);
	if(n==0){
	return 0;
	}
	int x[10000];
	int y[10000];
	i=0;
	while(i<n){
	scanf("%d", &x[i]);
	if(0>x[i] || 9<x[i]){
	return 0;
	}
	scanf("%d", &y[i]);
	if(0>y[i] || 9<y[i]){
	return 0;
	}
	++i;
}
	i=0;
	while(i<n){
	if(x[i]>y[i]){
	A=A+x[i]+y[i];
}else {
	if(x[i]<y[i]){
	B=B+x[i]+y[i];
}else{
	A=A+x[i];
	B=B+y[i];
			}
		}
	++i;
	}
	printf("%d %d\n", A, B);
	}
}