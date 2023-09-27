
/* vo00_08.cpp */
#include <iostream>
using namespace std;

int main()
{
	int n, count;

	while (true) {
		cin >> n;
		if (cin.eof()) { break; }

		count = 0;
		for (int a = 0; a <= 9; ++a)
			for (int b = 0; b <= 9; ++b)
				for (int c = 0; c <= 9; ++c)
					for (int d = 0; d <= 9; ++d)
						if (n == a + b + c + d) { count++; }

		cout << count << '\n';

	}
	return 0;
}