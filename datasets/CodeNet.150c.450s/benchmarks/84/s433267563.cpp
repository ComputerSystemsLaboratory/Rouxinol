#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#define INF 2000000000
using namespace std;



long merge(int *A,int left,int mid,int right){
	int n1 = mid - left;
	int n2 = right - mid;
	int *L = new int[n1+1];
	int *R = new int[n2+1];
	for(int i = 0; i < n1; i++){
		L[i] = A[left + i];
	}

	for(int i = 0; i < n2; i++){
		R[i] = A[mid + i];
	}
	L[n1] = INF;
	R[n2] = INF;
	int i = 0;
	int j = 0;
	long count = 0;
	for(int k = left; k < right; k++){
		if( L[i] <= R[j]){
			A[k] = L[i];
			i++;
		}else{			//L > R の時でかつ、i < n1 - 1 の場合順序の置き換えが発生している
			count += n1 - i;
			A[k] = R[j];
			j++;
		}
	}
	//delete[] L,R;
	return count;
}


long mergeSort(int *A,int left,int right){
	long totalCount = 0;
	if(left + 1 < right){
		int mid = (left + right) / 2;
		totalCount += mergeSort(A,left,mid);
		totalCount += mergeSort(A,mid,right);
		totalCount += merge(A,left,mid,right);
	}
	return totalCount;
}


int main()
{
	int n;
	cin >> n;
	int *A = new int[n];
	for(int i = 0; i < n; i++){
		cin>>A[i];
	}
	long count = 0;
	count = mergeSort(A,0,n);
	cout << count << endl;
	return 0;
}



