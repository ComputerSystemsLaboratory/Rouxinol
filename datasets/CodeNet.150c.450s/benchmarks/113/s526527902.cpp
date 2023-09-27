#include <iostream>
using namespace std;

int main() {
	
	int num, i = 1;

	while (1) {
		cin >> num;
		if (!num) {
			break;
		}
		cout << "Case " << i << ": " << num << endl;
		i++;
	}

	return 0;
}
