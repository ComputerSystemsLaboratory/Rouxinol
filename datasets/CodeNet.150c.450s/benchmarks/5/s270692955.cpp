#include <iostream>
#include <vector>

int main(int argc, char **argv){
	std::vector<int> v;
	int n = 0;

	std::cin >> n;
	v.resize(n);
	for(int i = 0; i < n; i++){
		std::cin >> v[i];
	}
	for(int i = n - 1; i >= 0; i--){
		std::cout << v[i];
		if(i > 0){
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}