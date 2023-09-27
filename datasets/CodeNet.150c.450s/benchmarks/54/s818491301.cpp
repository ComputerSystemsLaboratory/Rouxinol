#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void) {
	string word, text;

	cin >> word;
	transform(word.begin(), word.end(), word.begin(), ::tolower);

	int count = 0;
	while (cin>>text) {
		if (text == "END_OF_TEXT")
			break;
		transform(text.begin(), text.end(), text.begin(), ::tolower);
		if (text == word)
			count++;
		
	}

	cout << count << endl;
	return 0;
}