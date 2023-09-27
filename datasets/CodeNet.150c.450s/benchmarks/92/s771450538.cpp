#include <iostream>

int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;
	while(std::cin >> a >> b){
		int p = 10;
		int i = 1;
		while((a+b)/p != 0){
			i ++;
			p *= 10;
		}
		std::cout << i << std::endl;
	}
	return 0;
}