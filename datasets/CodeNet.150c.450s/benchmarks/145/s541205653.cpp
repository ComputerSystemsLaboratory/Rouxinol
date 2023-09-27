#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;


map <string, int> cnt;

int main() {
	
	string firstWord;
	string secondWord;
	
	int maxCount = 0;
	int maxLength = 0;
	
	string s;
	while (cin >> s) {
		cnt[s] = cnt[s] + 1;
		if (cnt[s] > maxCount) {
			maxCount = cnt[s];
			firstWord = s;
		}
		
		if ((int) s.size() > maxLength) {
			maxLength = s.size();
			secondWord = s;
		}
	}
	
	cout << firstWord << ' ' << secondWord << "\n";
	
	return 0;
}