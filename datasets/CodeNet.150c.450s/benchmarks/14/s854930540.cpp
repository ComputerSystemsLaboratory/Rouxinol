#include<iostream>


int main(){
	int na;
	std::cin>>na;
	for(int i = 1; ++i <= na;){
		if(i % 3 == 0 || i % 10 == 3 || i / 10 % 10 == 3 || i / 100 % 10 == 3 ||
			i / 1000 % 10 == 3 || i / 10000 % 10 == 3 ){
			std::cout<<" "<<i;
		}
	}
	std::cout<<std::endl;
	return 0;
}