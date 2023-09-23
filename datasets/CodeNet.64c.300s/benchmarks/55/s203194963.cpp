#include <iostream>

using namespace std;

int main() {

	int input[10001];
	int end_of_input;

	for (int i = 0; i < 10001;i++) {
		cin >> input[i];
		if (input[i] == 0) {
			end_of_input = i;
			break;
		}
	}

	for (int i = 0; i < end_of_input; i++) {
		cout << "Case " << i + 1 << ": " << input[i] << endl;
 	}

	return 0;

}