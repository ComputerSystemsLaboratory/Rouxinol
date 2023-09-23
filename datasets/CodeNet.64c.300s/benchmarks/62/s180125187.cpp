#include <iostream>

int main()
{
	int na, nb;
	std::cin >> na >> nb;
	int a[na][nb], b[nb];
	for (int i=0; i!=na; ++i)
		for (int j=0; j!=nb; ++j)
			std::cin >> a[i][j];
	for (int i=0; i!=nb; ++i)
		std::cin >> b[i];
	for (int i=0; i!=na; ++i) {
		int s = 0;
		for (int j=0; j!=nb; ++j) {
			s += a[i][j]*b[j];
		}
		std::cout << s << '\n';
	}
}