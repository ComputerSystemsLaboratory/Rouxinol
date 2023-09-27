#include<iostream>

int main(){
	int n,a=100000,b;
	std::cin>>n;
	for(b=0;b<n;b++){
		a*=1.05;
		if(a%1000!=0){
			a=a-(a%1000)+1000;
		}
	}
	std::cout<< a <<std::endl;
	return 0;
}