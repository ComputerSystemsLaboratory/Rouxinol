#include<iostream>
using namespace std;



int main() {
	int count;
	cin >> count;
	//random_device rd;
	//mt19937 mt;
	//mt.seed(rd());
	//uniform_int_distribution<> numDis(0,20);

	int* numList = new int[count];
	for (int i = 0; i < count; i++) {
		cin >> numList[i];
		//numList[i] = numDis(mt);
	}

	int swapCount = 0;

	for (int i = 0; i < count; i++) {
		int minIndex = i;
		for (int j = i; j < count; j++) {
			if (numList[j] < numList[minIndex]) {
				minIndex = j;
			}
		}
		if (minIndex!=i) {
			int temp = numList[i];
			numList[i] = numList[minIndex];
			numList[minIndex] = temp;
			swapCount++;
		}	
	}

	for (int k = 0; k < count; k++) {
		cout << numList[k];
		if (k != (count - 1)) {
			cout << ' ';
		}
	}
	cout << endl;
	cout << swapCount << endl;

	delete[] numList;
	return 0;
}