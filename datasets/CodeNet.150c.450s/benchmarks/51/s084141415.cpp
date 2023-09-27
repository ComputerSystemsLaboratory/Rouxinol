#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
bool table[100];
using namespace std;
int main(void) {
	for (int i = 0; i < 28; i++) {
		int buf;
		cin >> buf;
		table[buf] = true;
	}
	int i=1;
	for (; table[i]; i++);
	cout << i++ << endl;
	for (; table[i]; i++);
	cout << i << endl;
	return 0;
}