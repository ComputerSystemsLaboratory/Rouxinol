#include<iostream>

long long fact( int n )
{
	if( n == 1 ) return 1;
	else return n * fact( n - 1 );
}

int main()
{
	int x;
	std::cin >> x;
	std::cout << fact( x ) << std::endl;

 	return 0;
}