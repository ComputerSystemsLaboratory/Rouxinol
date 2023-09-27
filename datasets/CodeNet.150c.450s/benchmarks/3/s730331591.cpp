#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[1001], str2[1001], tmp[1001], m[10];
	int slen, tlen, a, b, i, j, q;
	cin >> str >> q;
	while (q--) {
		cin >> m >> a >> b;
		if (strcmp(m, "print") == 0) {
			for (i = a; i <= b; i++) {
				cout << str[i];
			}
			cout << endl;
		}
		if (strcmp(m, "reverse") == 0) {
			strncpy(tmp, &str[a], b-a+1);
			tmp[b-a+1] = '\0';
			for (i = a, j = strlen(tmp)-1; i <= b;) {
				str[i++] = tmp[j--];
			}
		}
		if (strcmp(m, "replace") == 0) {
			cin >> str2;
			for (i = a, j = 0; i <= b;) {
				str[i++] = str2[j++];
			}
		}
	}
	return 0;
}