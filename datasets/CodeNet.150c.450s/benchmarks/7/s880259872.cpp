#include<iostream>
int main() {
	int n[10];
	for (int i = 0;i < 10;++i){
		std::cin>>n[i];
	}
	for (int i = 0;i < 10;++i) {
		for (int j = 0;j < 10;++j) {
			if (i < j) {
				if (n[i]>n[j]) {
					int a = n[i];
					n[i] = n[j];
					n[j] = a;
				}
			}
		}
	}
	std::cout << n[9] << std::endl;
	std::cout << n[8] << std::endl;
	std::cout << n[7] << std::endl;
	return 0;
}