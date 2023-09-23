#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int N;
	cin >> N;

	int result = 1;

	for (int i = 0; i < 3; i++) {
		result *= N;
	}

	cout << result << endl;

	return 0;
}
