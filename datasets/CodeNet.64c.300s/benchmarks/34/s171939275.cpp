#include <iostream>
using namespace std;
int main(void){

	int n;
	cin >> n;

	int num[100];

	for (int i = 0; i < n; i++){
		
		cin >> num[i];
	}

	for (int j = 0; j < n - 1; j++) cout << num[j] << ' ';
	cout << num[n - 1] << endl;

	for (int i = 1; i < n; i++){

		int temp = num[i];
		int k = i;
		for (int j = i - 1; j >= 0; j--){

			if (num[j] <= temp)
				break;
			num[k] = num[j];
			k = j;
		}

		num[k] = temp;
		for (int j = 0; j < n - 1; j++) cout << num[j] << ' ';
		cout << num[n - 1] << endl;
	}
}