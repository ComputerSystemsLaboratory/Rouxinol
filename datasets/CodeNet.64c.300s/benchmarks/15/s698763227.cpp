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
int mini;



int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		mini = i;
		for (int j = i; j <= n - 1; j++) {
			if (a[j] < a[mini]) {
				mini = j;
			}
		}
		if (a[i] != a[mini]) {

			swap(a[i], a[mini]);
			k++;
		}
	}
	for (int i = 0; i < n-1; i++) {
		cout << a[i] << " ";
	}
	cout << a[n - 1] << endl << k << endl;
}