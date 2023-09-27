#include <iostream>
#include <string>
using namespace std;

int main() {
	int temp;
	string s, p;
	getline(cin, s);
	getline(cin, p);
	int flag = 0;
	s = s + s;
	int size = s.size();
	//cout << size << endl;
	for (int i = 0; i < size; i++) {
		temp = i;
		for (int j = 0; j < p.size(); j++) {

			//cout << "(" << i << ", " << j << ")  ";
			if (s[temp] != p[j]) break;
			//cout << "_";
			temp++;
			if (j == p.size()-1) {
				flag = 1;
			}
		}
	}
	if (flag == 1) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}