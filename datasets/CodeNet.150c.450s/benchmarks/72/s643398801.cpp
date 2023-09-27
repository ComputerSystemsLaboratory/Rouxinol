#include <iostream>
#include <string>

#include <stdio.h>
using namespace std;

int main(void) {
	string sentence;
	getline(cin, sentence);
	for (int i = 0; i < sentence.length(); i++) {
		int ascii = (int) sentence[i];
		if (65 <= ascii && ascii <= 90)
			sentence[i] += 32;
		if (97 <= ascii && ascii <= 122)
			sentence[i] -= 32;
		cout << sentence[i];
	}
	cout << endl;
	return 0;
}

