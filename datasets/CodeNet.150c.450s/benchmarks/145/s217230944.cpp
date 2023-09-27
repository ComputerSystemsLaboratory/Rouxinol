#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;
int main( void )
{
	map <string, int> TABLE;

	int max_length = 0;
	string max_length_word = "";
	int max_count = 0;
	string max_count_word = "";

	string text;
	string word;
	getline( cin, text );
	istringstream is( text );

	while ( is >> word )
	{
		if ( word.length() > max_length )
		{
			max_length_word = word;
			max_length = word.length();
		}

		if ( TABLE.find( word ) == TABLE.end() )
		{
			TABLE[word] = 0;
		}
		else
		{
			TABLE[word]++;
			if ( TABLE[word] > max_count )
			{
				max_count_word = word;
				max_count = TABLE[word];
			}
		}
	}

	cout << max_count_word << " " << max_length_word << endl;

	return 0;
}