#include <iostream>
#include <string>
#include <cstdlib>

#define SPACE string(" ")

using namespace std;

int main(void) {
	int n;
	cin >> n;

	int *i_ary = new int[n];

	string str;
	cin >> ws;
	getline(cin, str);

	string::size_type spos = 0;
	string::size_type epos = 0;
	int i = 0;

	while ((epos = str.find(SPACE, spos)) != string::npos) {
		if (str.substr(spos, epos - spos) != "") {
			i_ary[i++] = atoi(str.substr(spos, epos - spos).c_str());
		}
		spos = epos + SPACE.length();
	}
	i_ary[i] = atoi(str.substr(spos).c_str());

	for (int j = 0; j < ((i + 1) / 2); j++) {
		int tmp = i_ary[j];
		i_ary[j] = i_ary[i - j];
		i_ary[i - j] = tmp;
	}
	
	for (int k = 0; k < i; k++) {
		cout << i_ary[k] << SPACE;
	}
	cout << i_ary[i] << endl;

	return 0;
}