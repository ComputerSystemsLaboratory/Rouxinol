#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[5000];
	int n, m, sum;

	for (;;){
		cin >> n;
		if (n == 0) break;
		m = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		m = a[0];
		for (int i = 0; i < n; i++){
			sum = 0;
			for (int j = i; j < n; j++){
				sum += a[j];
				m = max(sum, m);
			}
		}

		cout << m << endl;
	}

	return 0;
}