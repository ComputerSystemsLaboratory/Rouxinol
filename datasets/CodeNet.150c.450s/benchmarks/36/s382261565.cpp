#include<iostream>
int main(){
	while(1){
		int d,s=0;
		std::cin>>d;
		if(std::cin.eof())break;
		for(int i=0;i<600;i+=d)s+=i*i*d;
		std::cout<<s<<std::endl;
	}
	return 0;
}