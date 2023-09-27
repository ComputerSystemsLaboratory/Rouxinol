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

int partition(int a[], int p, int r)
{
	int pivot = a[r];
	int i = p - 1;
	for(int j = p; j < r; j++){
		if(a[j] <= pivot){
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

int main()
{
	int n;
	int a[100000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = partition(a, 0, n - 1);
	for(int i = 0; i < n; i++){
		if(i == ans) cout << "[" << a[i] << "] ";
		else if(i == n - 1) cout << a[i] << endl;
		else cout << a[i] << " ";
	}
	return 0;
}