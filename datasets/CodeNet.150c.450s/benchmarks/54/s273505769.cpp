#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string word;
	int count = 0;

	cin >> word;

	while (1) {
		string sent;

		cin >> sent;
		if (sent == "END_OF_TEXT") break;

                for(int i=0; i<sent.length(); i++){
                   if(sent[i] >= 'A' && sent[i] <= 'Z')
                      sent[i] = sent[i]  + 32;
                }
		if (sent == word) count++;


		
	}

	cout << count << endl;

	return 0;
}