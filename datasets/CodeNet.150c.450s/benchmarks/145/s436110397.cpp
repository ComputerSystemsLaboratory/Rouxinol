#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

map<string, int> wordCount;

int main() {
	string input = "";
	
	cin >> input;
	
	string maxWord = "";
	
	while (input.size() > 0) {
		
		if (wordCount.find(input) == wordCount.end()) {
			wordCount[input] = 1;
		} else {
			wordCount[input] = wordCount[input] + 1;
		}
		
		if (input.size() > maxWord.size()) {
			maxWord = input;
		}
		
		input = "";
		cin >> input;
	}
	
	int freqCount = 0;
	string freqWord;
	
	for (map<string, int>::iterator it = wordCount.begin(); it != wordCount.end(); it++) {
		if ((*it).second > freqCount) {
			freqCount = (*it).second;
			freqWord = (*it).first;
		}
	}
	
	cout << freqWord << " " << maxWord << endl;
	
	return 0;
}