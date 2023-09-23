#include<iostream>
int main(){
	int na,nb,nc;
	std::cin>>na>>nb>>nc;
	if(na < nb && nb < nc)
		std::cout<<"Yes"<<std::endl;
	else
		std::cout<<"No"<<std::endl;
	return 0;
}