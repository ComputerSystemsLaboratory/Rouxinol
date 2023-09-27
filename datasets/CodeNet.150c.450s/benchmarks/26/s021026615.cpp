#include <iostream>

int main(int argc, char* argv[] ){
	int a,b;
	std::cin >> a >> b;
	const char* exp = (a == b) ? "==": 
	 (a<b)? "<" : ">" ;
	std::cout<<"a "<<exp<<" b"<<std::endl;
	}