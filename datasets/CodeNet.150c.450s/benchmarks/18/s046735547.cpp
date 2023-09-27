#include <iostream>
#include <string>
#include <math.h>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	int debt = 100000;

	std::cin >> n;
	
	for(int i = 0; i < n; i++){
		debt = int(debt * 1.05);
		debt = int(ceil(debt / 1000.0)) * 1000;
	}
	std::cout << debt << std::endl;
	return 0;
}