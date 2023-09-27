#include <iostream>
#include <vector>

long int euclid_alg(const long int a, const long int b) {
	return a > b ? a % b : b % a;
}

int main(void) {
	long int a,b;
	std::vector<long int> num;
	while(std::cin >> a >> b){
		num.push_back(a);
		num.push_back(b);
	}

	for(int i = 0; i < (int)num.size(); i+=2){
		long int pro = num[i] * num[i+1];
		while(num[i] != 0 && num[i+1] != 0){
		if(num[i] > num[i+1]){
				num[i] = euclid_alg(num[i],num[i+1]);
			}else{
				num[i+1] = euclid_alg(num[i],num[i+1]);
			}
		}

		if(num[i] == 0){
			num[i] = num[i+1];
			num[i+1] = 0;
		}
		num[i+1] = pro / num[i];
	}

	for(int j = 0; j < (int)num.size(); j+=2){
		std::cout << num[j] << " " << num[j+1] << std::endl; 
	}

	return 0;
}