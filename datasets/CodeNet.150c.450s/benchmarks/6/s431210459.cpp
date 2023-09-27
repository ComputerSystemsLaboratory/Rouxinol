#include <iostream>

const char* yes	= "Yes";
const char* no	= "No";
int main(int argc, char* argv[] ){
	int a,b,c;
	std::cin >> a >> b >> c;
	const char* exp = (a >= b) ? no: 
	 (b>=c)? no : yes ;
	std::cout<<exp<<std::endl;
	}