#include <iostream>

int main() {
	const int size = 4;
	int a[size], b[size];

	while (std::cin
		>> a[0] >> a[1] >> a[2] >> a[3]
		>> b[0] >> b[1] >> b[2]	>> b[3]
	) {
		int hit = 0, blow = 0;
		for (int i = 0; i < size; i++)
			if (a[i] == b[i]) {
				hit++;
			} else {
				for (int j = 0; j < size; j++)
					if (i != j && a[i] == b[j])
						blow++;
			}

		std::cout << hit << " " << blow << std::endl;
	}
}