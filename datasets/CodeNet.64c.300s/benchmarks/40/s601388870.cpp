#include <bits/stdc++.h>
using namespace std;
template < typename T > std::string to_string( const T& n ){
	std::ostringstream stm ;
	stm << n ;
	return stm.str() ;
}


int main(void){
	char s;
	while(s!=10){
		scanf("%c",&s);
		if(65 <= s && s<= 90)printf("%c",s+32);
		else if(97 <= s && s<= 122)printf("%c",s-32);
		else printf("%c",s);
	}
	return 0;
}
