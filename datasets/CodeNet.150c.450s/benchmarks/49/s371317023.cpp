#include <cstdio>
#include <iostream>

int main()
{
	int n, a, b;
	while(1){
		std::cin >> n;
		if(n == 0) break;
		int max = -1, min = 1001, sum = 0;
		for(int i = 0; i < n; i++){
			std::cin >> a;
			if(a > max) max = a;
			if(a < min) min = a;
			sum += a;
		}
		b = (sum - max - min) / (n - 2);
		std::cout << b << std::endl;
	}
	return 0;
}