#include <iostream>

int main(int argc, char **argv){
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;

	std::cin >> a >> b >> c;

	for(int i = a; i <= b; i++){
		if(c % i == 0){n++;}
	}
	std::cout << n << std::endl;
	return 0;
}