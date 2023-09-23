#include <iostream>

using namespace std;


int main(void){
  
 
	int r, c;
	int countC = 0;
	int *countR;
	cin >> r >> c;
	countR = new int[c + 1];
	for (int i = 0; i < c + 1; i++)
		countR[i] = 0;

	for (int i = 0; i<r; i++) {
		int number;
		for (int j = 0; j<c; j++) {
			cin >> number;
			cout << number << " ";
			countC += number;
			countR[j] += number;
		}
		cout << countC << endl;
		countC = 0;
	}

	for (int i = 0; i<c; i++) {
		cout << countR[i] << " ";
		countR[c] += countR[i];
	}
	cout << countR[c] << endl;
	delete[] countR;
return 0;
}