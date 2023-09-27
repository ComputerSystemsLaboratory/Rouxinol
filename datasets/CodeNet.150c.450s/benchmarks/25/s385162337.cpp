
#include<iostream>
#include <ctype.h>

using namespace std;

int main(){
	
	int counter[26] = { 0 };
	char c;
	while (cin >> c) {

		c = tolower(c);

		int num = c - 'a';  

		if (0 <= num && num < 26) {

			counter[num]++;
		}
	}
	for (int i = 0; i < 26; i++) {

		cout << char(i + 'a') << " : " << counter[i] << endl;

	}
	return 0;
}
