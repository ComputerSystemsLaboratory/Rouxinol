#include <iostream>
using namespace std;

int main() {
	while (1){
		int n, k;
		cin >> n >> k;

		if (n == 0 && k == 0){ break; }
		else{
			int i, inp;
			int *a;
			a = new int[n];

			for (i = 0; i<n; i++){
				cin >> inp;
				a[i] = inp;
			}

			int sum1 = 0, sum2 = 0, max = 0;

			for (i = 0; i<k; i++){ sum1 += a[i]; }
			max = sum1;

			for (i = k; i<n; i++){
				sum2 = sum1 + a[i] - a[i - k];
				if (sum2>max){ max=sum2; }
				sum1 = sum2;
			}

			cout << max << endl;

			delete[] a;
		}
	}
	return 0;
}