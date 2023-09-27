#include <iostream>

int main(){
	int x,y,a,b,s;
	std::cin>>s;
	x=s/3600;
	a=s%3600;
	y=a/60;
	b=a%60;
	std::cout<<x<<":"<<y<<":"<<b<<std::endl;
	return 0;
}