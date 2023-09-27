#include<iostream>

int main(){
	
	int a,b,c,k=0;
	std::cin >>a>>b>>c;
	
	for (int i=a; i<=b; i++){
		
		if (c%i==0)k++; 
		
	}
	
	std::cout <<k <<"\n";
	
	return 0;
	
}