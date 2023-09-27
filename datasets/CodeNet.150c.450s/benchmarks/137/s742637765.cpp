#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int num = 0, i = 0;
	string operation, word;
	map<string, int> word_map;

	cin >> num;
	while ( i < num )
	{
		cin >> operation;
		cin >> word;
		if ( operation == "insert" )
		{
			word_map[word] = 1;
		}
		else if ( operation == "find" )
		{
			if ( word_map[word] == 1 )
			{
				cout << "yes" << endl;
			}
			else if ( word_map[word] == 0 )
			{
				cout << "no" << endl;
			}
		}

		i = i + 1;
	}

	return 0;
}