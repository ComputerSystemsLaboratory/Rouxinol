#include<iostream>
#include<algorithm>
#include <array>
int main(void){
	int x;

		for(int count=1;;count++){
		std::cin >> x;
		if (x == 0){
			break;
		}
		std::cout <<"Case "<<count<<": "<<x<<std::endl;
	}
	return 0;
}