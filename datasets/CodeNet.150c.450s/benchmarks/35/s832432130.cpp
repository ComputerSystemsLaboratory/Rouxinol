#include <iostream>
using namespace std;
int main(void){

	long n, max=0;
	long *a;
	long sum;

	do{
		max = -1000000;
		//cout << endl;
		cin >> n;

		if (n == 0) break;

		a = new long[n + 1];

		sum = 0;

		for (int i = 0; i < n; i++){

			sum = 0;

			cin >> a[i];

			for (int j = i; j >= 0; j--){

				sum += a[j];
				if (max < sum) max = sum;
			}
		}

		cout << max << endl;
	} while (1);
}