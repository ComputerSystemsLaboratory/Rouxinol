#include<iostream>

// calculate times in one program

int main(){
	int a,b;
	char op;
	
	while(1){
		std::cin >> a >> op >> b;
		if(op=='?') break;
		
		if(op=='+')std::cout << a + b <<"\n";
		else if(op=='-')std::cout << a - b <<"\n";
		else if(op=='*')std::cout << a * b <<"\n";
		else if(op=='/'&&b!=0)std::cout << a / b <<"\n";
	}
	return 0;
}