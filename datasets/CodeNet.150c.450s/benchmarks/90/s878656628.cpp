#include <stdio.h>
#include <array>
#include <algorithm>

int
main(void)
{
	char line[80];

	int a;
	std::array<int, 101> h;

	for (int& s: h) {
		s = 0;
	}
	
	while (true) {
		if (fgets(line, sizeof line, stdin) == NULL) {
			break;
		}
		if (sscanf(line, "%d", &a) != 1) {
			break;
		}

		h[a] ++;
	}
	
	int m = *(std::max_element(h.begin()+1, h.end()));

	for (auto i = h.begin()+1; i != h.end(); i++) {
		if (*i == m) {
			printf("%d\n", std::distance(h.begin(), i));
		}
	}
	
	return 0;
}