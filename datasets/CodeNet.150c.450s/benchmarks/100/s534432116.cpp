#include <iostream>

int main(){
	
	long long int n,a=1;
	std::cin>>n;
	if(n<=20&&n>0){
	while(n!=0){
		a=a*n;
		n--;
	}
	
	std::cout<<a<<std::endl;
}
	return 0;
}