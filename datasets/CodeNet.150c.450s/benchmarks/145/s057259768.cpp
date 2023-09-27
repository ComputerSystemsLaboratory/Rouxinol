#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

typedef const pair<string, int> PSI;

bool cmpCount(PSI &T1, PSI &T2) {
	return T1.second < T2.second;
}

bool cmpLength(PSI &T1, PSI &T2) {
	return T1.first.length() < T2.first.length();
}

int main() {
	string str;
	map<string, int> M;

	while(cin >> str) {
		M[str]++;
	}

	PSI maxCount = *max_element(M.begin(), M.end(), cmpCount);
	PSI maxLength = *max_element(M.begin(), M.end(), cmpLength);

	cout << maxCount.first << " " << maxLength.first << endl;

	return 0;
}