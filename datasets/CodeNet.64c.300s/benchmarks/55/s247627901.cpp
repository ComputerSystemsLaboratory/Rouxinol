#include<iostream>

int main(){
	int i=0;
	int x;
	std::cin >> x;
	while (x != 0){
		i++;
		std::cout << "Case " << i << ": " << x << '\n';
		std::cin >> x;
	}
}