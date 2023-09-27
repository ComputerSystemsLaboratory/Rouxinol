#include<iostream>

int main(){

	int n, k;
	while (std::cin >> n >> k){

		if (n == 0 && k == 0)break;

		int data[100001] = { 0 };
		for (int i = 1; i <= n; i++){
			std::cin >> data[i];
		}
		for (int i = 1; i <= n; i++){
			data[i] += data[i - 1];
		}

		int max = 0;
		for (int i = k; i <= n; i++){
			int sum = data[i] - data[i - k];
			if (sum > max)max = sum;
		}

		std::cout << max << std::endl;
	}
	return 0;
}