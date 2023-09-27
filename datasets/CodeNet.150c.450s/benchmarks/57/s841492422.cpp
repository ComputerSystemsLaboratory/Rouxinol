#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	while(1) {
		int a, b;
		char s[3];
		int ret;
		cin >> a >> s >> b;
		if(!strcmp(s,"?")) break;
		else if(!strcmp(s,"+")) ret = a + b;
		else if(!strcmp(s,"-")) ret = a - b;
		else if(!strcmp(s,"*")) ret = a * b;
		else ret = a / b;
		cout << ret << endl;
	}
	return 0;
}