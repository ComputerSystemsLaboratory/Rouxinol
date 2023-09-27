#include <iostream>
#include <string.h>

using namespace std;
int main() {
	int x;
	int str[1001];
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> str[i];
	}

	for (int i = x - 1; i >= 0; i--) {
		if(i!=0)	cout << str[i] << " ";
		else cout << str[i];

	}


	cout << endl;
	return 0;
}