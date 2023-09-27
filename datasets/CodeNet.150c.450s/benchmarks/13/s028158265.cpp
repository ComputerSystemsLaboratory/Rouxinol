#include <iostream>
#include <string>
using namespace std;
int main()
{
	std::string s, p;
	std::getline( cin, s );
	std::getline( cin, p );

	 std::string::size_type i, j;

	for( i = 0; i < s.size(); ++i ){
		for( j = 0; j < p.size(); ++j){
			if( s[(i + j) % s.size()] != p[j] )
				break;

			if( j == p.size() - 1){
				cout << "Yes\n";
				return 0;
			}
		}
	}

	cout << "No\n";
		
	return 0;
}