#include <iostream>
#include <vector>

int main () {
	
	int n = 0;
	const int max_n = 2;
	std::vector<int> v;
	int i,j;
	int tmp;
	
	while(n++ <= max_n) {
		std::cin >> tmp; 
		v.push_back(tmp);
	}
	n = 0;

	for (i = max_n; i; i--) {
		for (j = 0; j < i; j++) {
			if (v[j] > v[j+1]) {
				tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}
	
	while(n <= max_n) {
		if (n - max_n)
			std::cout << v[n] << " ";
		else
			std::cout << v[n] << std::endl;
		n++;
	} 

	return 0;
}

