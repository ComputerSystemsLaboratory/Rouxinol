#include <iostream>
#include <string>
using namespace std;

int main(void) {


	int a[26] = {};

	string str;
	// getline(cin, str);

	while (getline(cin, str)) {
		for(int i=0;i<str.size();i++) {
			if('a' <= str[i] && str[i] <= 'z') {
				a[(int)str[i]-'a'] += 1;
			} else if('A' <= str[i] && str[i] <= 'Z') {
				a[(int)str[i]-'A'] += 1;
			}
		}
	}

	for(int i=0;i<26;i++) {
		cout << (char)(i+(int)'a') << " : " << a[i] << endl;
	}

    return 0;
}