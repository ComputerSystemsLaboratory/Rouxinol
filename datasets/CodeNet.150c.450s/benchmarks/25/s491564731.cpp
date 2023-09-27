#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int alphabets[26] = { 0 };
	char up = 'A', low = 'a';

	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			up = 'A'; low = 'a';
			for (int j = 0; j < 26; j++) {
				if (s[i] == up || s[i] == low) alphabets[j]++;
				up++;
				low++;
			}
		}
	}

	low = 'a';
	for (int i = 0; i < 26; i++) {
		cout << low++ << " : " << alphabets[i] << "\n";
	}
}