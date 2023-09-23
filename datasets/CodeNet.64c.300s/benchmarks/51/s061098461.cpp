#include<iostream>
int main(){
	int n;
	long long int m=1;
	std::cin>>n;
	for(int i=n;i>0;i--)m*=i;
	std::cout<<m<<std::endl;
	return 0;
}