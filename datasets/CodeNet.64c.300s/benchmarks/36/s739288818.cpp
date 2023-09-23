#include <iostream>
using namespace std;

int main()
{
	int num[3];
	int temp;

	for (int i = 0; i < 3; i++) cin >> num[i];

	for (int i = 0; i < 3; i++){
		for (int j = i; j < 3; j++){
			if (!(num[i] <= num[j])){
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	for (int i = 0; i < 3; i++){
		cout << num[i];
		if (i == 2){
			cout << '\n';
			break;
		}
		cout << ' ';
	}

	return 0;
}