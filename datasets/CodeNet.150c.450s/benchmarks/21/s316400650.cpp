#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(void) {
	string str;
	getline(cin, str);

	int n = atoi(str.c_str());
	cout << n * n * n << endl;

	return 0;
}