#include <iostream>
#include <string>
int main()
{

	while (1) {
		int n;
		std::cin >> n;
		if (n == 0) {
			break;
		}
		char before[100000], after[100000];
		for (int i = 0; i < n; i++) {
			std::cin >> before[i] >> after[i];
		}
		int m;
		std::cin >> m;
		char s_before[100000];
		std::string s_after(m,' ');
		for (int i = 0; i < m; i++) {
			std::cin >> s_before[i];
			s_after[i] = s_before[i];
			for (int j = 0; j < n; j++) {
				if (s_before[i] == before[j]) {
					s_after[i] = after[j];
				}
			}
		}
		std::cout << s_after << std::endl;
	}
	return 0;
}