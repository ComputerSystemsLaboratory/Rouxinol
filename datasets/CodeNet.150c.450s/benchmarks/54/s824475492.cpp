#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string w, s;
	int cnt = 0;

	cin >> w;
	for (unsigned int i = 0; i < w.length(); i++){
		if (isupper(w[i])) w[i] = tolower(w[i]);
	}

	while (1){
		cin >> s;
		if (s == "END_OF_TEXT") break;
		
		if (s.length() > w.length() + 1) continue;
		for (unsigned int i = 0; i < s.length(); i++) {
			if (s[i] == '.' && i == s.length() - 1) s.erase(i);
			if (isupper(s[i])) s[i] = tolower(s[i]);
		}

		if (s == w) cnt++;
	}

	cout << cnt << endl;

	return 0;
}