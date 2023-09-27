#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string s,p;
	string r;
	int slen, plen;
	getline(cin, s);
	getline(cin, p);
	slen = s.size();
	plen = p.size();
	int i, j;
	bool success;
	for(i = 0; i < slen; i++) {
		success = true;
		for(j = 0; j < plen; j++) {
			if(p[j] != s[(i + j) % slen]) {
				success = false;
				break;
			}
		}
		if(success) {
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}