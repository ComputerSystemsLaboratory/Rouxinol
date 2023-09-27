#include<stdio.h>
#include<string.h>
#include<iostream>
#include <fstream>
using namespace std;

#define N	100000
int	A[N + 1] = { 0 };
int	L[N + 1] = { 0 };
int search(int p[], int left, int right, int value)
{
	while (right - left >= 2){
		int s = (left + right) / 2;
		if (p[s] < value){
			left = s;
		}
		else {
			right = s;
		}
	}
	if (p[left] >= value)
		return	left;
	return right;
}

int main(){
	std::istream & c_in = cin;
	int	n;
	c_in >> n;
	for (int i = 0; i < n; i++){
		c_in >> A[i];
	}
	L[0] = A[0];
	int length = 1;
	for (int i = 1; i < n; ++i){
		if (L[length - 1] < A[i]){
			L[length++] = A[i];
		}
		else{
			int j = search(L, 0, length - 1, A[i]);
			L[j] = A[i];
		}
	}
	if (n == 0)
		length = 0;
	printf("%d\n", length);
	return 0;
}