#include <cstdio>
#include <set>
#include <string>

int main() {
	int n = 0;
	scanf("%d", &n);
	std::string cmd, str;
	char buff[100];
	std::set<std::string> dict;
	for (int i = 0; i < n; i++) {
		scanf("%s",buff);
		cmd = buff;
		scanf("%s",buff);
		str = buff;
		if (cmd[0] == 'i') {
			dict.insert(str);
		}
		else {
			if (dict.find(str) != dict.end()) {
				printf("yes\n");
			}
			else {
				printf("no\n");
			}
		}
	}

	return 0;
}