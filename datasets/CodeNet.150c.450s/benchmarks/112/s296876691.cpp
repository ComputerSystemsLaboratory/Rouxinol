#include <iostream>
#include <map>
#include <iterator>

int main(){
	int n;
	std::map< char, char > m;

	while( std::cin >> n, n ){
		while( n-- ){
			char c[2];

			std::cin >> c[0] >> c[1];

			m[c[0]] = c[1];
		}

		std::cin >> n;
		while( n-- ){
			 char c;
			 std::map< char, char >::iterator it;

			 std::cin >> c;

			 if( (it = m.find(c)) != m.end() ){
			 	c = it->second;
			 }
			 std::cout << c;
		}

		std::cout << std::endl;
		m.clear();
	}
}