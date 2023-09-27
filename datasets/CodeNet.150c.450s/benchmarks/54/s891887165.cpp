#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
	int cnt = 0;
	string word, sentence;
	cin >> word;

	while (true)
	{
		cin >> sentence;

		if (sentence == "END_OF_TEXT") {
			break;
		}

		for (int i = 0;i < sentence.size();i++) {
			sentence[i] = tolower(sentence[i]);
		}

		if (sentence == word) {
			cnt++;
		}
	}

	cout << cnt << endl;
    return 0;
}

