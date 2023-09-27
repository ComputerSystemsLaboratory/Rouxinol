#include<iostream>

int bubbleSort(int A[], int N) {
	int sw = 0;
	bool flag = 1;
	for(int i = 0; flag; i++){
		flag = 0;
		for(int j = N-1; j >= i+1; j--){
			if(A[j] < A[j-1]){
				std::swap(A[j], A[j-1]);
				flag = 1;
				sw++;
			}
		}
	}
	return sw;
}

int main() {
	int A[100], N, sw;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> A[i];
	}
	sw = bubbleSort(A, N);

	for(int i = 0; i < N; i++) {
		if(i) std::cout << " ";
		std::cout << A[i];
	}
	std::cout << std::endl;
	std::cout << sw << std::endl;

	return 0;
}
