#include<iostream>

using namespace std;

int main() {
	int numList[3];
	for (int i = 0; i < 3; i++) {
		cin >> numList[i];
	}

	for (int j = 0; j < 3; j++) {
		for (int l = j; l < 3; l++) {
			if (numList[l] < numList[j]) {
				int temp = numList[j];
				numList[j] = numList[l];
				numList[l] = temp;
			}
		}
	}

	cout << numList[0] << " " << numList[1] << " " << numList[2] << endl;
	//system("pause");

	return 0;
}