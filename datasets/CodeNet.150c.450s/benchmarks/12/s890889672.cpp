#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

#define N 500000

int n;
int A[N+1];

int parent(int i){
	return i/2;
}
int left(int i){
	return 2*i;
}
int right(int i){
	return 2*i+1;
}
int inside(int i){
	if(i>=1&&i<=n) return 1;
	else return 0;
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		cin >> A[i];
	}
	for(int i=1; i<=n; i++){
		printf("node %d: ", i);
		printf("key = %d, ", A[i]);
		if(inside(parent(i))) printf("parent key = %d, ", A[parent(i)]);
		if(inside(left(i))) printf("left key = %d, ", A[left(i)]);
		if(inside(right(i))) printf("right key = %d, ", A[right(i)]);
		printf("\n");
	}

	return 0;
}