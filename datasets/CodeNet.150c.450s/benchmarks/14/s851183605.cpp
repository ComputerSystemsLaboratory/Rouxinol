#include<iostream>

void call(int n) {
	for(int i=1; i<=n; i++) {
		if(i % 3 == 0) {
			std::cout << " " << i;
		} else {
			int x = i;
			while(x) {
				if(x % 10 == 3) {
					std::cout << " " << i;
					break;
				}
				x /= 10;
			}
		}
	}
	std::cout << std::endl;
}

int main()
{
	int n;
	while(std::cin >> n) {
		call(n);
	}
	
	return 0;
}