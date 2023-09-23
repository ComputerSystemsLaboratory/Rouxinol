#include <iostream>

bool include3(int x) {
	for (;x != 0; x /= 10) {
		if ( x % 10 == 3 ){
			return true;
		}
	}
	return false;
}

void call(int n){
	for (int i = 1; i <= n; ++i) {
		if ( i % 3 == 0 || include3(i) ){
			std::cout << " " << i;
		}
	}

	std::cout << std::endl;
}

int main(void) {
	int n;
	std::cin >> n;
	call(n);
	return 0;
}