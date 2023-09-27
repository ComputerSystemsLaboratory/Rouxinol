#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	char str_c[1001];
	scanf("%s", str_c);
	string str(str_c);

	int num_q;
	scanf("%d", &num_q);

	int i, j;
	char cmd_c[100];
	string cmd;
	int a, b;
	char repl_c[1001];
	string repl;
	string line;
	i = 0;
	string new_str;
	while(1) {
		getline(cin, line);
		if(line == "") continue;
		else i++;

		sscanf(line.c_str(), "%s", cmd_c);
		cmd = string(cmd_c);
		if(cmd == "replace") {
			sscanf(line.c_str(), "%s %d %d %s", cmd_c, &a, &b, repl_c);
			repl = string(repl_c);
			str.replace(a, b - a + 1, repl);
		} else {
			sscanf(line.c_str(), "%s %d %d", cmd_c, &a, &b);
			if(cmd == "reverse") {
				new_str = string(str);
				for(j = a; j <= b; j++) {
					new_str[j] = str[b + a - j];
				}
				str = string(new_str);
				//printf("-> %s\n", str.c_str());
			} else {
				cout << str.substr(a, b - a + 1) << endl;
			}
		}
		if(i >= num_q) {
			break;
		}
	}

	return 0;
}