#include <iostream>
#include <utility>

struct card{
	char suit, value;
};

void bubbleSort(struct card A[], int N){
	for(int i = 0; i < N; i++){
		for(int j = N-1; j >= i; j--){
			if(A[j].value < A[j-1].value) std::swap(A[j], A[j-1]);
		}
	}
}

void selectionSort(struct card A[], int N){
	for(int i = 0; i < N; i++){
		int minj = i;
		for(int j = i; j < N; j++){
			if(A[minj].value > A[j].value) minj = j;
		}
		std::swap(A[minj], A[i]);
	}
}

int main(){
	int N;
	std::cin >> N;
	card A[N], B[N];
	for(int i = 0; i < N; i++){
		std::cin >> A[i].suit >> A[i].value;
		B[i].suit = A[i].suit;
		B[i].value = A[i].value;
	}
	bubbleSort(A, N);
	for(int i = 0; i < N; i++){
		if(i) std::cout << " ";
		std::cout << A[i].suit << A[i].value;
	}
	std::cout << std::endl;
	std::cout << "Stable" << std::endl;
	selectionSort(B, N);
	for(int i = 0; i < N; i++){
		if(i) std::cout << " ";
		std::cout << B[i].suit << B[i].value;
	}
	std::cout << std::endl;
	int f = 1;
	for(int i = 0; i < N; i++){
		if(A[i].suit != B[i].suit){
			std::cout << "Not stable" << std::endl;
			f = 0;
			break;
		}
	}
	if(f) std::cout << "Stable" << std::endl;
	return 0;

}