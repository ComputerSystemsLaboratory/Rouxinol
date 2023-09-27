#include <iostream>
#include <cmath>
#include <vector>

inline int functional(int x){
	return x*x;
}

int main(void){
	int buf;
	int x_max = 600;
	std::vector<int> d;

	while(std::cin >> buf){
		d.push_back(buf);
	}
	
	int sum;
	for(int i = 0; i < (int)d.size(); ++i){
		sum = 0;
		for(int j = 0; j < x_max; j += d[i]){
			sum += d[i]*functional(j);
		}
		std::cout << sum << std::endl;
	}
	return 0;
}