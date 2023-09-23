#include <iostream>
#include <math.h>

#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

#if INPUT_FROM_FILE
#define IS ifs
#else
#define IS std::cin
#endif

bool is_prime(int num){
	bool ret = true;
	int max = int(sqrt(num)) + 1;

	if(num == 2){
	}
	else if(num % 2 == 0){
		ret = false;
	}
	else{
		for(int i = 3; i < max; i+=2){
			if(num % i == 0){
				ret = false;
				break;
			}
		}
	}

	return ret;
}

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	int num_primes = 0;

	IS >> n;

	for(int i = 0; i < n; i++){
		int num = 0;

		IS >> num;
		if(is_prime(num)){
			num_primes++;
		}
	}

	std::cout << num_primes << std::endl;
	return 0;
}