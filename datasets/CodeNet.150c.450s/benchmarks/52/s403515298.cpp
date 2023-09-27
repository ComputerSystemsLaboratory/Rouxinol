#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <iostream>
using namespace std;

int main() {
	int in;
	vector <int> a;
	while (cin >> in) {
		if (in == 0) {
			cout << a.back();
			a.pop_back();
			/*if (a.size() == 0)
				break;
			else*/
				cout << endl;
		}
		else
			a.push_back(in);
	}
	return 0;
}
