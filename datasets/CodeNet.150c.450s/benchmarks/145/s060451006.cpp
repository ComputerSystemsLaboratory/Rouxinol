#include <stdio.h>
#include <string.h>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int
main(void)
{
	char line[1002];

	if (fgets(line, sizeof line, stdin) == NULL) {
		return 0;
	}

	char* token = strtok(line, " \n");

	map<string, int> s;
	int m = 0;
	string ms;

	while (token) {
		string ts(token);

		if (s.find(ts) == s.end()) {
			s[ts] = 0;
		}
		s[ts] ++;

		if (m < (int)(ts.size())) {
			m = ts.size();
			ms = ts;
		}
		
		token = strtok(NULL, " \n");
	}

	if (!s.empty()) {
		auto itr = max_element(s.begin(), s.end(),
			[](const pair<string, int>& a, const pair<string, int>& b)
				-> bool {
					return (a.second < b.second);
				});
				
		printf("%s %s\n", (*itr).first.c_str(), ms.c_str());
	}

	return 0;
}