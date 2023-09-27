#include <stdio.h>
#include <iostream>
using namespace std;

bool judge(const char s[], const char p[]);

int main(void)
{	
	char s[101] = "\0";
	char p[101] = "\0";
	cin >> s;
	cin >> p;
	
	bool result = judge(s, p);
	if (result) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;
}

bool judge(const char s[], const char p[]) {
	for (int j = 0; s[j] != '\0'; j++) {
		if (p[0] == s[j]) {
			int k = j;
			int i;
			for (i = 1; p[i] != '\0'; i++) {
				if (s[k+i] == '\0') k = -i;
				if (p[i] != s[k+i]) break;
			}
			if (p[i] == '\0') return true;
		}
	}
	return false;
}