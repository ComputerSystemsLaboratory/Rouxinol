#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	int n;

	while(true){
		std::cin >> n;
		if ( n == 0 ) break;

		std::vector<int> v(n,0);

		for ( int i = 0; i < n; ++i ) {
			std::cin >> v[i];
		}

		std::sort(v.begin(), v.end());

		int sum = 0;
		for ( int i = 1; i < n-1; ++i ) {
			sum += v[i];
		}
		std::cout << sum / (n-2) << std::endl;
	}
	return 0;
}