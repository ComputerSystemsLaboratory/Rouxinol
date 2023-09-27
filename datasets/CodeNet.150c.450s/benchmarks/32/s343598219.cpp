#include <algorithm>
#include <iostream>

int scores[200];

int main()
{
	while (true) {
		int input_count, nmin, nmax;
		std::cin >> input_count >> nmin >> nmax;

		if (input_count == 0) return 0;

		for (int i = 0; i < input_count; i++) {
			int p;
			std::cin >> p;
			scores[i] = p;
		}

		std::sort(&scores[0], &scores[input_count]);

		int result_pass_count;
		int max_gap = 0;
		for (int pass_count = nmin; pass_count <= nmax; pass_count++) {
			int gap = scores[input_count - pass_count] - scores[input_count - pass_count - 1];
			if (gap >= max_gap) {
				result_pass_count = pass_count;
				max_gap = gap;
			}
		}

		std::cout << result_pass_count << std::endl;
	}
}