#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	int i, j, k, n, n2;
	int m[100][100] = { 0 };
	int list[400][400] = { 0 };

	cin >> n;
	for (i = 0; i<n; i++) {
		cin >> n2;
		cin >> n2;
		list[i][0] = n2;
		for (j = 1; j <= n2; j++) {
			cin >> list[i][j];
		}
	}
	//cout << endl;
	
	for(i=0; i<n; i++){
		n2=list[i][0];
		for(j=1; j<=n2; j++){
			//cout << list[i][j] << " ";
			m[i][list[i][j] - 1] = 1;
		}
		//cout << endl;
	}
	//cout << endl; cout << endl;
	

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << m[i][j];
			if (j != (n - 1)) cout << " ";
		}
		cout << endl;
	}
	//cout << endl; cout << endl;

	return 0;
}