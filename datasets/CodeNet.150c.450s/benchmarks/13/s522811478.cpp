#include <iostream>
//#include <iomanip>
//#include <vector>
#include <string>
//#include <algorithm>

using namespace std;

int main(){

	string s,p;
	int index = 0;

	getline(cin, s);
	getline(cin, p);

	for (int i = 0; i < s.size(); i++){
		index = i;
		if (s[i] == p[0]){
			for (int j = 0; j < p.size(); j++){
				index = (i + j) % s.size();
				if (s[index] != p[j]) break;
				if (j == p.size() - 1) {
					cout << "Yes" << endl;
					return 0;
				}
			}
		}
	}

	cout << "No" << endl;

	return 0;
}