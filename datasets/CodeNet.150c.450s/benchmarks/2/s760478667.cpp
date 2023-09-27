#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <list>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int Partition(int a[], int p, int r) {
	int x = a[r];
	int i = p-1;
	for(int j = p; j < r; j++) {
		if(a[j] <= x) {
			i++;
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	int temp = a[i+1];
	a[i+1] = x;
	a[r] = temp;
    return i+1;
}



int main() {
	int n;
	cin >> n;
	int a[n];
	for( int i = 0; i < n; i++) cin >> a[i];
	int b = Partition(a, 0, n-1);
	for( int i = 0; i < n; i++) {
		if(i == b) {
			if( i ) cout << " [" <<a[i] << "]";
			else cout << "[" << a[i] << "]";
		} else if( i ) cout << " " <<a[i];
		else cout << a[i];
	}
	cout << endl;
	return 0;
}