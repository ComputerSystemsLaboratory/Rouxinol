#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <iomanip>
  
using namespace std;

#define pi 3.141592653589793
#define SENTINEL 1000000001

int cnt = 0;

void Merge(int a[], int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	int L[250001], R[250001];
	for(int i = 0; i < n1; i++){
		L[i] = a[left + i];
	}
	for(int i = 0; i < n2; i++){
		R[i] = a[mid + i];
	}
	L[n1] = SENTINEL;
	R[n2] = SENTINEL;
	int i = 0, j = 0;
	for(int k = left; k < right; k++){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++;
		} else {
			a[k] = R[j];
			j++;
		}
		cnt++;
	}
	return;
}

void MergeSort(int a[], int left, int right)
{
	if(left + 1 < right){
		int mid = (left + right) / 2;
		MergeSort(a, left, mid);
		MergeSort(a, mid, right);
		Merge(a, left, mid, right);
	}
	return;
}

int main()
{
	int n, a[500000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	MergeSort(a, 0, n);
	for(int i = 0; i < n; i++){
		cout << a[i];
		if(i == n - 1) cout << endl;
		else cout << " ";
	}
	cout << cnt << endl;
	return 0;
}