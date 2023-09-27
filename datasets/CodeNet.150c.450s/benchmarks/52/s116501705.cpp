#include<iostream>
#include<vector>

int main(){
	std::vector<int> out;
	std::vector<int> stock;
	int a;
	while( std::cin >> a ){
		if( a == 0 ){
			out.push_back(stock.back());
			stock.pop_back();
		}
		else{
			stock.push_back(a);
		}
	}
	
	for(unsigned int i=0; i<out.size(); ++i){
		std::cout << out[i] << std::endl;
	}
	
	return 0;
}