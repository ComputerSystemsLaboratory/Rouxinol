#include <iostream>
#include <string>
using namespace std;
int main()
{
	string w, s;
	cin >> w;

	std::string::size_type p;
	size_t ws = w.size();
	for(p = 0; p < ws; ++p )
		w[p] = tolower(w[p]);

	int t = 0;
	while( cin >> s )
	{
		if( s == "END_OF_TEXT" ) 
			break;
		
		if( ws != s.size() )
			continue;

		for(p = 0; p < ws; ++p ){
			if( w[p] != tolower(s[p]) )
				break;

			if( p == ws - 1 )
				++t;
		}	
	}

	cout << t << "\n";

	return 0;
}