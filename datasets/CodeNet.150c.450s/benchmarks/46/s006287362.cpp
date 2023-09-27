#include <iostream>
#include <utility>

#define INPUT_FROM_FILE (0)

#if INPUT_FROM_FILE
#include <fstream>
#endif

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif // INPUT_FROM_FILE
	int n = 0;
	int x = 0;

#if INPUT_FROM_FILE
	while(ifs >> n >> x, (n != 0 || x != 0)){
#else
	while(std::cin >> n >> x, (n != 0 || x != 0)){
#endif
		int result = 0;
		for(int i = 1; i < n; i++){
			for(int j = i + 1; j < n; j++){
				int k = x - i - j;
				if(k > j && k <= n){
					result++;

					//dbg
					//std::cout << i << " + " << j << " + " << k << std::endl;
				}
			}
		}
		std::cout << result << std::endl;
	}
	return 0;
}