#include <stdio.h>
#include <stack>

int
main(void)
{
	char line[80];
	int m;
	std::stack<int> s;

	while (fgets(line, sizeof line, stdin)) {
		if (sscanf(line, "%d", &m) == 1) {
			if (m == 0) {
				printf("%d\n", s.top());
				s.pop();
			} else {
				s.push(m);
			}
		}
	}

	return 0;
}