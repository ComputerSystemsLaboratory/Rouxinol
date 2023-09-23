#include<iostream>
int main(){
	int na,nb,nc,nd = 0;
	std::cin>>na>>nb>>nc;
	for(int i = na;i <= nb; ++i){
		if(nc % i == 0)
			++nd;
	}
	std::cout<<nd<<std::endl;
	return 0;
}