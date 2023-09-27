#include <iostream>

int main()
{
	int a = 0, b = 0, S = 0, P = 0; //Initialisation
	std::cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);
	std::cout << S << " " << P <<std::endl;
	return 0;	
}