#include<iostream>
#include<string>
using namespace std;
int main()
{
	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int n_alphabet[26] = { 0 };
	string s;

	while (getline(cin,s)) {
		//getline(cin, s);
		//if (s.empty())break;//???????????????????????°break
		for (int i = 0; i < s.size(); i++) {
			for (int j = 0; j < 26; j++) {
				if (s[i] == alphabet[j] || tolower(s[i]) == alphabet[j]) {
					n_alphabet[alphabet[j] - 'a'] += 1;
					break;
				}
			}
		}
	}

	//output
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " : " << n_alphabet[i] << endl;
	}

	return 0;
}