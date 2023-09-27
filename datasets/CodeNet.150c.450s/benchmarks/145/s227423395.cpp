#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int i = 0, max_num = 0, max_length_string_num = 0, tmp_num = 0;
	map< string, int > input_word;
	string tmp, max_length_string, max_num_string;

	while ( cin >> tmp )
	{
		input_word[tmp] = input_word[tmp] + 1;
		if ( tmp.length() > max_length_string_num )
		{
			max_length_string = tmp;
			max_length_string_num = tmp.length();
		}
	}

	map< string, int >::iterator it = input_word.begin();
	while ( it != input_word.end() )
	{
		tmp_num = (*it).second;
		if ( tmp_num > max_num )
		{
			max_num_string = (*it).first;
			max_num = tmp_num;
		}
		++it;
	}

	cout << max_num_string << " " << max_length_string << endl;

	return 0;
}