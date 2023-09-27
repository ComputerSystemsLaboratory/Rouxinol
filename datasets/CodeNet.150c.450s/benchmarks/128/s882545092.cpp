#include <iostream>
#include <string>

using namespace std;


void displayAnswer(const string& str) {
	for(auto ite = str.rbegin(); ite != str.rend(); ++ite)
		cout << *ite;
	cout << endl;
}


void doAllProcess() {
	string buffer;

	getline(cin, buffer);

	displayAnswer(buffer);
}


int main() {
	doAllProcess();

	return 0;
}
