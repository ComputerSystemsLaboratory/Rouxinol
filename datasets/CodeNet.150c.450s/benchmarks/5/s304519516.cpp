#include <iostream>
int main(){
	int a,y;
	std::cin >> a;
	int x[a];
	for(int b = 0;b < a;b++){
		std::cin >> y;
		x[b] = y;
	}
	for(int c = a-1;c >= 0;c--){
		std::cout <<x[c];
		if(c > 0){
			std::cout <<" ";
		}
	}
	std::cout<<std::endl;
}