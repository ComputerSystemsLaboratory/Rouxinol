#include <iostream>
#include <utility>

int selectionSort(int A[], int N){
	int ans = 0;
	for(int i = 0; i < N; i++){
		int minj = i;
		for(int j = i; j < N; j++){
			if(A[j] < A[minj]){
				minj = j;
			}
		}
		if(minj != i){
			std::swap(A[minj], A[i]);
			ans++;
		}
	}
	for(int i = 0; i < N; i++){
		if(i) std::cout << " ";
		std::cout << A[i];
	}
	std::cout << std::endl;
	return ans;
}

int main(){
	int N;
	std::cin >> N;
	int A[N];
	for(int i = 0; i < N; i++){
		std::cin >> A[i];
	}
	int ans = selectionSort(A, N);
	std::cout << ans << std::endl;
	return 0;
}