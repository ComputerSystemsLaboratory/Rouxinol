#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

	int a, b;
	std::string symb;

	std::cin>>a>>b;
	
	if (a<b) {
		symb = "<";
	}
	else if (a>b) {
		symb = ">";
	}
	else {
		symb = "==";
	}

	std::cout<<"a "<<symb<<" b"<<std::endl;
	return 0;
}