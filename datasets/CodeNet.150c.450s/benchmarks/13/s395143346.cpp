#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
	char sstr[101], pstr[101];
	int i, j, slen, plen, flag = 0;
	cin >> sstr >> pstr;
	slen = strlen(sstr);
	plen = strlen(pstr);
	for (i = 0; i < slen; i++) {
		for (j = 0; sstr[(i+j)%slen] == pstr[j] && j != plen; j++);
		if (j == plen)
			flag = 1;
	}
	if (flag)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}