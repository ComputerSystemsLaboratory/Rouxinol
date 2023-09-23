#include <iostream>
#include <string>
using namespace std;

int main() {
	int q, i, j, k, key;
	int array[100];
	cin >> q;
	for (i = 0; i<q; i++)
		cin >> array[i];
	for (i = 1; i < q; i++){
		for (int j = 0; j<q; j++){
			cout << array[j];
			if (j == q - 1) cout << endl;
			else cout << " ";
		}
		key = array[i];
		j = i - 1;
		while (j >= 0 && array[j]>key){
			array[j + 1] = array[j];
			j--;
			array[j + 1] = key;
		}
	}
		for (int i = 0; i < q; i++){
			cout << array[i];
			if (i == q - 1) cout << endl;
			else cout << " ";
		}
	
}