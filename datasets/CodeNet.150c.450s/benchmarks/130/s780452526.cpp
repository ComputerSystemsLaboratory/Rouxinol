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
	int n = 0;
	int m = 0;
	std::vector<std::vector<int> > mat_A;
	std::vector<int> vec_b;

#if INPUT_FROM_FILE
	ifs >> n >> m;
#else
	std::cin >> n >> m;
#endif // INPUT_FROM_FILE

	mat_A.resize(n);
	for(int i = 0; i < n; i++){
		mat_A[i].resize(m, 0);
	}
	vec_b.resize(m, 0);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
#if INPUT_FROM_FILE
			ifs >> mat_A[i][j];
#else
			std::cin >> mat_A[i][j];
#endif // INPUT_FROM_FILE
		}
	}
	for(int i = 0; i < m; i++){
#if INPUT_FROM_FILE
		ifs >> vec_b[i];
#else
		std::cin >> vec_b[i];
#endif // INPUT_FROM_FILE
	}

	for(int i = 0; i < n; i++){
		int result = 0;
		for(int j = 0; j < m; j++){
			result += mat_A[i][j] * vec_b[j];
		}
		std::cout << result << std::endl;
	}

	return 0;
}