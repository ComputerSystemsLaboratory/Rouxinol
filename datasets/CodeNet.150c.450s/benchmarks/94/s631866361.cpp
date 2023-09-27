#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
int n;
int a[100];
int k=0;




int main()
{
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= i + 1; j--) {
			if (a[j - 1] > a[j]) {
				swap(a[j], a[j - 1]);
				k++;
			}
		}
	}
	for (int i = 0; i < n-1; i++) {
		cout << a[i] << " ";

	}
	cout << a[n - 1] << endl;
	cout << k << endl;
}