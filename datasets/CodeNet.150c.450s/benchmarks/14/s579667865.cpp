#include <bits/stdc++.h>
using namespace std;
template < typename T > std::string to_string( const T& n ){
	std::ostringstream stm ;
	stm << n ;
	return stm.str() ;
}


int main(void){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		if(i%3 == 0||(int)to_string(i).find("3") !=-1) cout << " " << i;
	}
		cout << "\n";
	return 0;
}
