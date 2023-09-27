#include <iostream>
#include <string>
#include <algorithm>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	std::string str0;
	std::string str1;
	int score0 = 0;
	int score1 = 0;

#if INPUT_FROM_FILE
	ifs >> n;
#else
	std::cin >> n;
#endif
	
	for(int i = 0; i < n; i++){
#if INPUT_FROM_FILE
		ifs >> str0 >> str1;
#else
		std::cin >> str0 >> str1;
#endif
		if(str0 > str1){
			score0 += 3;
		}
		else if(str1 > str0){
			score1 += 3;
		}
		else{
			score0++;
			score1++;
		}
	}
	std::cout << score0 << " " << score1 << std::endl;
	return 0;
}