#include<iostream>

int main(){
	
	int a,b,c,more,less;
	std::cin >>a>>b>>c;
	
	less = b<c?b:c;
	more = b>c?b:c;
	
	if (a<=less && a<=more) std::cout << a <<" "<< less <<" "<< more <<"\n";
	else if (a>=less && a<=more)std::cout<< less<<" "<<a<<" "<<more<<"\n";
	else std::cout << less <<" "<< more<<" "<<a<<"\n";
	
	return 0;
	
}