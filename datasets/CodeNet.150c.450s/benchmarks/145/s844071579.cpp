#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> words;
	string word;
	int longest = 0, aliance = 0;
	while (cin >> word) {
		if (words.find(word) == words.end()) {
			int len = word.size();
			words[word] = 1;
			longest = max(longest, len);
		} else {
			int n = words[word];
			words[word] = n + 1;
		}
	}
	map<string, int>::iterator it;
	for (it = words.begin(); it != words.end(); it++)
		aliance = max(aliance, it->second);
	for (it = words.begin(); it != words.end(); it++)
		if (it->second == aliance) {
			cout << it->first;
			break;
		}
	for (it = words.begin(); it != words.end(); it++) {
		string s = it->first;
		if (s.size() == longest) {
			cout << " " << s << endl;
		}
	}

	return 0;
}