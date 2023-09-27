#include<iostream>
#include<string>

using namespace std;

int main () {
	string line;
	getline (cin, line);
	for (int i = line.size () - 1; i >= 0; --i) {
		cout << line[i];
	}
	cout << endl;


	return 0;
}