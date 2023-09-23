/*
 * WelcomeToAtCoder.cpp
 *
 *  Created on: 2020/02/19
 *      Author: black
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <list>
#include <cstring>
#include <stdio.h>
using namespace std;

#define MAX 100000


void iswap(int A[], int a, int b){
	int tmp = A[a];
	A[a] = A[b];
	A[b] = tmp;
}

int partition(int A[], int p, int r){
	int x = A[r];
	int i = p - 1;
	for(int j=p; j<r; ++j){
		if(A[j] <= x){
			i++;
			iswap(A, i, j);
		}
	}
	iswap(A, i+1, r);
	return i+1;
}

int main(){
	int A[MAX];
	int n;

	scanf("%d", &n);
	for(int i= 0; i< n; ++i){
		scanf("%d", &A[i]);
	}

	int count = partition(A, 0, n-1);

	for(int i= 0; i< n; ++i){
		if(0 != i){
			cout << " ";
		}
		if (count == i){
			cout << "[";
		}
		cout << A[i];
		if (count == i){
			cout << "]";
		}

	}
	cout << endl;


	return 0;

}

