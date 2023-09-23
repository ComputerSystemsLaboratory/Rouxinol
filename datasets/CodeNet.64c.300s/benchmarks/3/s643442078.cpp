#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(void){
	int n = 0;
	cin >> n;
	int *a = new int[n];


	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--){
		cout  << a[i];
		if (i != 0){
			cout << " ";
		}
	}
	cout << endl;

	return 0;
}