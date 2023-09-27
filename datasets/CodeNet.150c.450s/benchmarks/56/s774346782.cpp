#include<iostream>

int main(void){
	int n, min = 1000000, max = -1000000;
	long long sum = 0;
	
	std::cin >> n;
	if (n == 0) return 0;
	
	for (int i = 0; i < n; i++){
		int x;
		std::cin >> x;
		sum = sum + x;
		if (min > x) min = x;
		if (max < x) max = x;
	}
	
	std::cout << min << " " << max << " " <<  sum << std::endl;
	
	return 0;
}