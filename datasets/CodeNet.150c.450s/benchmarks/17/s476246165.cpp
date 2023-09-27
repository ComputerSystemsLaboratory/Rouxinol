#include<algorithm>
#include<iostream>

int main()
{
	int x[5];
	for( int i = 0; i < 5; i++ ){
		std::cin >> x[i];
	}
	
	std::sort( x, x + 5 );

	std::cout << x[4];
	
	for( int i = 3; i >= 0; i-- ){
	 	std::cout << " " << x[i];
	}
	
	std::cout << std::endl;

 	return 0;
}