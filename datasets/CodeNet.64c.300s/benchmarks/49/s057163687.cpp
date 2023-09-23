#include <iostream>

using namespace std;

int main()
{
	int i,j;
	int a[200], b[200];
	int digit[200] = { 0 };

	for ( i = 0; i < 200; i++){
		if(!(cin >> a[i] >> b[i])){
			break;
		}

		int sum = a[i] + b[i];
		while (1){
			digit[i]++;
			sum /= 10;
			if (sum == 0){
				break;
			}
		}
	}

	for (j = 0; j < i; j++){
		cout << digit[j] << endl;
	}

	return 0;
}