#include <iostream>
#include <vector>
#include <algorithm>

#define INPUT_FROM_FILE (0)
#if INPUT_FROM_FILE
#include <fstream>
#endif

void counting_sort(const std::vector<int> &A, std::vector<int> &B, int k){
	std::vector<int> C(k + 1, 0);
	
	for(unsigned int i = 0; i < A.size(); i++){
		C[A[i]]++;
	}

	for(unsigned int i = 1; i < C.size(); i++){
		C[i] += C[i - 1];
	}

	for(int i = B.size() - 1; i >= 0; i--){
		B[C[A[i]] - 1] = A[i];
		C[A[i]]--;
	}
	return;
}

int main(int argc, char **argv){
#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
#endif
	int n = 0;
	std::vector<int> A;
	std::vector<int> B;
	int k = 0;

#if INPUT_FROM_FILE
	ifs >> n;
#else
	std::cin >> n;
#endif

	A.resize(n, -1);
	B.resize(n, -1);
	for(int i = 0; i < n; i++){
#if INPUT_FROM_FILE
		ifs >> A[i];
#else
		std::cin >> A[i];
#endif
		k = std::max(k, A[i]);
	}

	counting_sort(A, B, k);

	std::cout << B[0];
	for(int i = 1; i < n; i++){
		std::cout << " " << B[i];
	}
	std::cout << std::endl;

	return 0;
}
