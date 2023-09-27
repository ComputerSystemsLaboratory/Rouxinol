#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[201], tmp[201], work;
	int i, j, n, h, slen;
	while (1) {
		cin >> str;
		slen = strlen(str);
		if (slen == 1 && str[0] == '-')
			break;
		cin >> n;
		while (n--) {
			cin >> h;
			for (i = 0, j = h; i < slen; i++, ++j %= slen) {
				if (i < h)
					tmp[i] = str[j];
				else
					tmp[i] = str[j];
			}
			for (i = 0; i < slen; i++)
				str[i] = tmp[i];
			str[i] = '\0';
		}
		cout << str << endl;
	}
	return 0;
}