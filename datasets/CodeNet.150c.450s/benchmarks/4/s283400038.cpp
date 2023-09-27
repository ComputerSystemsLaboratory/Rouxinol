#include <iostream>
#include <vector>

#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif // INPUT_FROM_FILE
	int m = 0;
	int f = 0;
	int r = 0;
	int mpf = 0;

#if INPUT_FROM_FILE
	while(ifs >> m >> f >> r, (m != -1 || f != -1 || r != -1)){
#else
	while(std::cin >> m >> f >> r, (m != -1 || f != -1 || r != -1)){
#endif // INPUT_FROM_FILE
		if(m < 0 || f < 0){
			std::cout << "F" << std::endl;
			continue;
		}
		mpf = m + f;

		if(mpf >= 80){
			std::cout << "A" << std::endl;
		}
		else if(mpf >= 65){
			std::cout << "B" << std::endl;
		}
		else if(mpf >= 50){
			std::cout << "C" << std::endl;
		}
		else if(mpf >= 30){
			if(r >= 50){
				std::cout << "C" << std::endl;
			}
			else{
				std::cout << "D" << std::endl;
			}
		}
		else{
			std::cout << "F" << std::endl;
		}
	}
	return 0;
}