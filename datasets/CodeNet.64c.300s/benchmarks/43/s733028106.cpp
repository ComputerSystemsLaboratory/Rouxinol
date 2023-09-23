#include <iostream>

using namespace std;

int main() {

	int s[4], t[4], ss ,st;

	ss=st=0;
	for(int i=0; i<4; i++) {
		cin >> s[i];
	}
	for(int i=0; i<4; i++) {
		cin >> t[i];
	}
	for(int i=0; i<4; i++) {
		ss+=s[i];
		st+=t[i];
	}
	cout << (ss>=st ? ss : st) << endl;

	return 0;

}