// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>

typedef long long llong;
using namespace std;


int main() {
	char s[210];
	char p[210];

	fgets(s, 110, stdin);
	fgets(p, 110, stdin);
	s[strlen(s)-1] = '\0';
	p[strlen(p) - 1] = '\0';
	char dummy[210];
	strcpy(dummy, s);
	strcat(s, dummy);

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == p[0]) {
			for (int j = 0; p[j] != '\0'; j++) {
				if (s[i + j] != p[j])break;
				else if (p[j + 1] == '\0') {
					cout << "Yes\n";
					return 0;
				}
			}
		}
	}
	cout << "No\n";
	return 0;
}

