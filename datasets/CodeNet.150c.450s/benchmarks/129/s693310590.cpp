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
	int r = 0;
	int c = 0;
	std::vector<int> sums;
	
#if INPUT_FROM_FILE
	ifs >> r >> c;
#else
	std::cin >> r >> c;
#endif
	sums.resize(c + 1, 0);

	for(int i = 0; i < r; i++){
		int sum = 0;
		for(int j = 0; j < c; j++){
			int t = 0;
#if INPUT_FROM_FILE
			ifs >> t;
#else
			std::cin >> t;
#endif
			std::cout << t << " ";
			sum += t;
			sums[j] += t;
		}
		std::cout << sum << std::endl;
		sums[c] += sum;
	}
	for(int j = 0; j < c + 1; j++){
		std::cout << sums[j];
		if(j < c){
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}