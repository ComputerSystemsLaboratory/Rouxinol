#include<iostream>
int main(){
	int h,m,S;
	std::cin>>S;
	if(S>=3600){
		h=S/3600;
		S=S%3600;
		std::cout<<h<<":";
	}
	else{
		std::cout<<"0"<<":";
	}
	if(S>=60){
		m=S/60;
		S=S%60;
		std::cout<<m<<":";
	}
		else{
		std::cout<<"0"<<":";
	}
	std::cout<<S<<std::endl;
}