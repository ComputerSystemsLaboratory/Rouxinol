#include <iostream>
#include <utility>

int bubbleSort(int A[], int N){
	int flag = 1;
	int ans = 0;
	while(flag){
		flag = 0;
		for(int j = N-1; j >= 1; j--){
			if(A[j] < A[j-1]){
				std::swap(A[j], A[j-1]);
				ans++;
				flag = 1;
			}
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
	int ans = bubbleSort(A, N);
	std::cout << ans << std::endl;
	return 0;
}