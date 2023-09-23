#include <iostream>

int main() {
	int n,num,b;
	int a=1;
	std::cin >> n;
	b=n;
	int list[n];
	while(a<=n){
		std::cin >> num;
		list[a]=num;
		a++;
	}
	while(a>=n && b>=2){
		std::cout << list[b] << " ";
		b=b-1;
	}
	if(b==1){
		std::cout << list[1] << std::endl;
	}
	return 0;
}