#include<iostream>
#include <string>
#include <cstdlib> //絶対値利用のため
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
#define fr(i,n) for(int i=0;i<n;i++)
#define ifr(i,n) for(int i=n-1;i>=0;i--)

//const int INF = INT_MAX / 2;

void trace(int a[], int n){
	for (int i = 0; i < n; i++) {
		if (i > 0) cout << " ";
		cout << a[i];
	}
	cout << endl;
}

void bubleSort(int a[], int n) {
	int counter = 0;
	for (int i = 1; i < n; i++) {
		for (int j = n - 1; j >= i; j--) {
			if (a[j] < a[j - 1]) {
				int t = a[j];
				a[j] = a[j - 1];
				a[j - 1] = t;
				counter++;
			}
		}
	}
	trace(a, n);
	cout << counter << endl;
}



int main() {
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	bubleSort(a, n);

	return 0;
}

