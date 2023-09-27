#include<vector>
#include<list>
#include<iostream>
#include<string>
#include<string.h>
#include<unordered_map>
using namespace std;

int main() {
	string word;
	unordered_map<string, int> myhash;
	int maxLen = 0;
	string maxLenS;
	int maxCount = 0;
	string maxCountS;
	while (cin >> word) {
		if (word.length() > maxLen) {
			maxLen = word.length();
			maxLenS = word;
		}
		if (myhash.find(word) == myhash.end()) {
			myhash[word] = 1;
		}
		else {
			myhash[word]++;
		}
		if (myhash[word] > maxCount) {
			maxCount = myhash[word];
			maxCountS = word;
		}
	}
	cout << maxCountS << ' ' << maxLenS << endl;
	return 0;
}