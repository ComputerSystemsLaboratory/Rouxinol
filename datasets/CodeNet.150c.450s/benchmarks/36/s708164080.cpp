#include <vector>
#include <iostream>

int main(){
	int d,i;
	long sum;
	
	while(std::cin >> d){
		sum = 0;
		for(i=d;i<600;i+=d){
			sum+= d*i*i;
		}
		std::cout << sum << std::endl;
	}
}