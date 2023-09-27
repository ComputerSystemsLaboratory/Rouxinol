#include<iostream>
#include<stack>

int main()
{
	std::stack<int> s;
	int x;
	while( std::cin >> x ){
	 	if( x ) s.push( x );
		else{
		 	std::cout << s.top() << std::endl;
			s.pop();
		}
	}

 	return 0;
}