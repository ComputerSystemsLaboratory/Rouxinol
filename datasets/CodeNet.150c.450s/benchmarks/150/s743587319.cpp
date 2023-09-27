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

void CountingSort(int a[], int b[], int k)
{
	int *c = new int[2000000];
	for(int i = 0; i < 2000000; i++){
		c[i] = 0;
	}
	for(int i = 0; i < k; i++){
		c[a[i]]++;
	}
	for(int i = 1; i < 2000000; i++){
		c[i] = c[i] + c[i - 1];
	}
	for(int i = k - 1; i >= 0; i--){
		b[c[a[i]] - 1] = a[i];
		c[a[i]]--;
	}
	delete[] c;
	return;
}

int main()
{
	int n;
	int *a  = new int[2000000];
	int *b = new int[2000000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	CountingSort(a, b, n);
	for(int i = 0; i < n; i++){
		cout << b[i];
		if(i == n - 1) cout << endl;
		else cout << " ";
	}
	delete[] a;
	delete[] b;
	return 0;
}