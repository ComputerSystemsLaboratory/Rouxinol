#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long llong;
const int INF = 0x3f3f3f3f;
const int MAXN = 200005;

int A[MAXN], L[MAXN/2], R[MAXN/2];

llong merge(int left, int mid, int right){
	int n1 = mid - left, n2 = right - mid;
	for(int i = 0; i < n1; i++)	L[i] = A[left+i];
	for(int i = 0; i < n2; i++)	R[i] = A[mid+i];
	L[n1] = R[n2] = INF;
	int i, j;
	llong v = 0;
	i = j = 0;
	for(int k = left; k < right; k++){
		if(L[i] <= R[j])
			A[k] = L[i++];
		else{
			v += n1 - i;
			A[k] = R[j++];
		}
	}
	return v;
}

llong mergeSort(int left, int right){
	llong v1, v2, v3;
	if(left + 1 < right){
		int mid = (left + right) / 2;
		v1 = mergeSort(left, mid);
		v2 = mergeSort(mid, right);
		v3 = merge(left, mid, right);
		return v1 + v2 + v3;
	}
	else	
		return 0;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)	scanf("%d", A + i);
	llong  ans = mergeSort(0, n);
	cout << ans << endl;
	return 0;
}