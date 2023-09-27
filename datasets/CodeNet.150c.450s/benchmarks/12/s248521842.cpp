#include <iostream>
#include <vector>

using namespace std; 

int main(void) {
	int size;
	cin >> size;
	vector<int> key(size);
	for (int i = 0; i < size; ++i) {
		cin >> key[i];
	}
	for (int i = 0; i < size; ++i) {
		cout << "node " << i+1 << ": ";
		cout << "key = " << key[i] << ", ";
		if (i > 0) {
			cout << "parent key = " << key[(i-1)/2] << ", ";
		}
		if (((2*i)+1) < size) {
			cout << "left key = " << key[(2*i)+1] << ", ";
		}
		if (((2*i)+2) < size) {
			cout << "right key = " << key[(2*i)+2] << ", ";
		}
		cout << endl;
	}
	return 0;
}

