#include<iostream>
#include<string>
#include<string.h>

int n, m;
char s[10000000];

int main()
{
	while( 1 ){
		std::cin >> n;
		
		if( !n ) break;
		
		memset( s, '\0', sizeof( s ) );
		
		while( n-- ){
		 	char c1, c2;
			std::cin >> c1 >> c2;
			s[c1] = c2;
		}
		
		std::string res;
		
		std::cin >> m;
		while( m-- ){
		 	char c;
			std::cin >> c;
			
			if( s[c] != '\0' ){
			 	res += s[c];
			}
			else{
			 	res += c;
			}
		}
		
		std::cout << res << std::endl;
	}

 	return 0;
}