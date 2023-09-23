#include <iostream>

int main(int argc, char **argv)
{
	int a, b;
	int n;
	int acards[10000],bcards[10000];
	while(true){
		a = 0;
		b = 0;
		std::cin >> n;
		if(n == 0){
			break;
		}
		for(int i = 0; i < n; i++){
			std::cin >> acards[i] >> bcards[i];
			if(acards[i] < bcards[i]){
				b += bcards[i] + acards[i];
			}
			if(acards[i] > bcards[i]){
				a += bcards[i] + acards[i];
			}
			if(acards[i] == bcards[i]){
				a += acards[i];
				b += bcards[i];
			}
		}
		std::cout << a << " " << b << std::endl;
	}
	return 0;
}