#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	typedef int Freqency;
	typedef string Name;
	map<Name, Freqency> table;
	string name, freqMax = "", lenMax = "";

	while (cin >> name) {
		table[name]++;
		if (table[name] > table[freqMax]) freqMax = name;

		if (name.size() > lenMax.size()) lenMax = name;
	}

	cout << freqMax << " " << lenMax << endl;
}