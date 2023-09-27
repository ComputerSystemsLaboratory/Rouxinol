#include<iostream>
#include<vector>
int main(){
	int n;
	std::cin >> n;
	std::vector<int> A(n);
	int ans = 0;
	for (int i = 0; i < n; ++i)std::cin >> A[i];
	for (int i = 0; i < A.size(); ++i){
		int mini = i;
		for (int j = i; j < A.size(); ++j){
			if (A[j] < A[mini])mini = j;
		}
		if (i != mini){
			std::swap(A[i], A[mini]);
			ans++;
		}
	}
	for (int i = 0; i < n; ++i){
		std::cout << A[i];
		if (i != n - 1)std::cout << " ";
	}
	std::cout << std::endl << ans << std::endl;
	return 0;
}