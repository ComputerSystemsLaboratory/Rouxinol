#include<iostream>

int main(){
	
	int a1,a2,a3,b1,b2,b3,c;
	std::cin >>a1>>a2>>a3;
	
	b1=a1,b2=a2,b3=a3;
	if (b1>b2) c=b1, b1=b2, b2=c;
	if (b2>b3) c=b2, b2=b3, b3=c;
	if (b1>b2) c=b1, b1=b2 ,b2=c;
	
	std::cout << b1 <<" "<< b2 <<" "<< b3 <<"\n";
	
	return 0;
	
}