#include <iostream>
#include <vector>

int CountPrime(int n){
	
	if ((n == 0) || (n == 1)){
		return 0;
	}else{
		std::vector<bool> data(n - 1, 1);
		int count = 0;

		for (int i = 2; i <= n; i++){
			if (data[i - 2] == 1){
				for (int j = i * 2; j <= n; j += i){
					data[j - 2] = 0;
				}
			}
		}
		for (int i = 0; i < n - 1; i++){
			if (data[i] == 1){
				count++;
			}
		}

		return count;

	}
}


int main(){
	int n;

	while (std::cin >> n){
		std::cout << CountPrime(n) << "\n";
	}

	return 0;
}