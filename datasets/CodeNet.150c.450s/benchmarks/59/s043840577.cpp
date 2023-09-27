#include <iostream>


int main(){
	int N;
	std::cin >> N;
	int A[N];
	for(int i = 0; i < N; i++){
		std::cin >> A[i];
	}
	for(int i = 0; i < N; i++){
		int v = A[i];
		int j = i-1;
		while(j >= 0 && A[j] > v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		std::cout << A[0];
		for(int k = 1; k < N; k++){
			std::cout << " " << A[k];
		}
		std::cout << std::endl;
	}
}