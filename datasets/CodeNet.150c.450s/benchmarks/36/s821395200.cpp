#include <iostream>

int main(){
	int d;
	while(std::cin >> d){
		int ans = 0;
		for(int i = d; i < 600; i += d){
			ans += i * i;
			//std::cout<<i<<std::endl;
			//ans += (600 - i) * (600 - i) * d;
		}
		std::cout << ans * d << std::endl;
	}	
}