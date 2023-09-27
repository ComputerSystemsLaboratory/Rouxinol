#include<string>
#include<iostream>
#include<utility>

using namespace std;

int main() {
	string str;

	cin >> str;

	auto it1 = str.begin();
	auto it2 = str.end() - 1;

	while (it1 < it2) {
		swap(*it1++, *it2--);
	}

	cout << str << endl;
	return 0;
}