#include<iostream>
int main(){
	int na,nb;
	while(1){
		std::cin>>na>>nb;
		if(na == 0 && nb == 0) break;
		if(na < nb)
			std::cout<<na<<" "<<nb<<std::endl;
		else
			std::cout<<nb<<" "<<na<<std::endl;
	}
	return 0;
}