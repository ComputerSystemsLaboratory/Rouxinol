#include <algorithm>
#include <iostream>
#include <vector>

unsigned int partition(std::vector<int>& A, int p, int r)
{
	int x = A[r];
	unsigned int i = p - 1;
	for(int j = p; j < r; j++){
		if(A[j] <= x){
			i++;
			std::swap(A[i], A[j]);
		}
	}
	std::swap(A[i+1], A[r]);
	return i + 1;
}

void Output(std::vector<int>& A, unsigned int q)
{
	for(unsigned int i=0; i < A.size(); i++){
		if(i == q){
			std::cout << "[" << A[i] << "]";
		}else{
			std::cout << A[i];
		}
		if(i < A.size()-1){
			std::cout << " ";
		}else{
			std::cout << std::endl;
		}
	}
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> A(n);
	for(int i=0; i<n; i++){
		std::cin >> A[i];
	}
	Output(A, partition(A, 0, n - 1));
	return 0;
}