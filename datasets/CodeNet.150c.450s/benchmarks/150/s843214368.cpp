#include <iostream>
#include <vector>

typedef std::vector<int> Ints;

void CountingSort(const Ints& A, Ints& B, int k)
{
	Ints C(k + 1, 0);
	
	//C[i] ??? i ???????????°????¨??????????
	for(unsigned int j = 0; j < A.size(); j++){
		C[A[j]]++;
	}
	//C[i] ??? i ??\????????°???????????°????¨??????????
	for(int i = 1; i <= k; i++){
		C[i] += C[i-1];
	}
	
	for(int j = A.size() - 1; j >= 0; j--){
		B[C[A[j]] - 1] = A[j];
		C[A[j]]--;
	}
}

int main()
{
	int Count;
	std::cin >> Count;
	Ints A(Count);
	Ints B(Count);
	int k = 0;
	for(int i=0; i < Count; i++){
		std::cin >> A[i];
		if(k < A[i]) k = A[i];
	}
	CountingSort(A, B, k);
	for(int i=0; i < Count; i++){
		std::cout << B[i];
		if(i < Count - 1){
			std::cout << " ";
		}else{
			std::cout << std::endl;
		}
	}
	return 0;
}