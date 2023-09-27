#include <cctype>
#include <string>
#include <iostream>
using namespace std;
string s, t; int n;
int main() {
	cin >> s;
	for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
	while(cin >> t) {
		for(int i = 0; i < t.size(); i++) t[i] = tolower(t[i]);
		if(s == t) n++;
	}
	printf("%d\n", n);
	return 0;
}