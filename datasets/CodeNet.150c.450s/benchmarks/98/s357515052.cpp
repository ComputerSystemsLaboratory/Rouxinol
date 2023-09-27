#include <iostream>
#include <vector>

int main(void)
{

	while(true){
		int n, m;
		std::cin >> n >> m;
		if ( n == 0 && m == 0 ) break;

		std::vector<int> taro(n);
		std::vector<int> hanako(m);

		int sum_taro = 0;
		int sum_hanako = 0;
		for ( int i = 0; i < n; ++i ) {
			std::cin >> taro[i];
			sum_taro += taro[i];
		}
		for ( int i = 0; i < m; ++i ) {
			std::cin >> hanako[i];
			sum_hanako += hanako[i];
		}

		int min = 0xffff;
		int a = -1, b = -1;
		for ( int i = 0; i < n; ++i ) {
			for ( int j = 0; j < m; ++j ) {
				if ( (sum_taro - taro[i] + hanako[j]) == (sum_hanako - hanako[j] + taro[i]) ) {
					if ( min > taro[i] + hanako[j] ) {
						min = taro[i] + hanako[j];
						a = taro[i];
						b = hanako[j];
					}
				}
			}
		}
		if ( a != -1 ) {
			std::cout << a << " " << b << std::endl;
		} else {
			std::cout << -1 << std::endl;
		}

	}
	return 0;
}