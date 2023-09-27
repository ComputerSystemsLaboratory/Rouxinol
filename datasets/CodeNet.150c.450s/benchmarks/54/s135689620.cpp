#include <iostream>
#include <algorithm>
#include <cctype>
#include <list>
using namespace std;

template <typename T_char>
T_char ToLower(T_char cX) { return tolower(cX); }

int stricmp(string lhs, string rhs) {
	transform(lhs.begin(), lhs.end(), lhs.begin(), ToLower<char>);
	transform(rhs.begin(), rhs.end(), rhs.begin(), ToLower<char>);

	return (lhs.compare(rhs)==0)?true:false;
}

int main(int argc, char** argv) {
	string target_word;
	list<string> sentence;
	cin >> target_word;

	string tmp;
	while(tmp != "END_OF_TEXT") {
		cin >> tmp;
		sentence.push_back(tmp);
	}

	int cnt = 0;
	for(list<string>::iterator it = sentence.begin();
			it != sentence.end();
			++it) {
		if(stricmp(*it, target_word)) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}