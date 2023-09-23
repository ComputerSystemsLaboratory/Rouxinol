#include<iostream>

int function(int x){
	int f = x*x;
	return f;
}

int main(){
	int d;
	
	while(std::cin >> d){
		double n = 600/d;
		int S = 0;
		
		for(int i=1; i<n ; ++i){
			S += function(i*d) * d;
		}
		
		std::cout << S << std::endl;
	}
	return 0;
}