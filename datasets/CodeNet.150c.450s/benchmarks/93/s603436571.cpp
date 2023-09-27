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

int partition(int a[], char b[], int c[], int p, int r)
{
	int pivot = a[r];
	int i = p - 1;
	for(int j = p; j < r; j++){
		if(a[j] <= pivot){
			i++;
			swap(a[i], a[j]);
			swap(b[i], b[j]);
			swap(c[i], c[j]);
		}
	}
	swap(a[i + 1], a[r]);
	swap(b[i + 1], b[r]);
	swap(c[i + 1], c[r]);
	return i + 1;
}

void quicksort(int a[], char b[], int c[], int p, int r)
{
	if(p < r){
		int q;
		q = partition(a, b, c, p, r);
		quicksort(a, b, c, p, q - 1);
		quicksort(a, b, c, q + 1, r);
	}
	return;
}

bool isstable(int a[], int c[], int n)
{
	for(int i = 0; i < n - 1; i++){
		if(a[i] == a[i + 1] && c[i] > c[i + 1]) return false;
	}
	return true;
}

int main()
{
	int n;
	int a[100000];
	char b[100000];
	int c[100000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> b[i] >> a[i];
		c[i] = i;
	}
	quicksort(a, b, c, 0, n - 1);
	if(isstable(a, c, n)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	for(int i = 0; i < n; i++){
		cout << b[i] << " " << a[i] << endl;
	}
	return 0;
}