#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{
	char in[1200];
	char out;
	int i = 0;

	cin.getline(in, sizeof(in));

	while (1)
	{
		bool s_tf = false;
		bool l_tf = false;

		s_tf = islower(in[i]);
		l_tf = isupper(in[i]);

		if (s_tf == true)
		{
			out = toupper(in[i]);
			cout << out;
		}
		else if (l_tf == true)
		{
			out = tolower(in[i]);
			cout << out;
		}
		else if (in[i] == '\0')
		{
			cout << endl;
			break;
		}
		else
		{
			cout << in[i];
		}
		i++;
	}

	return 0;
}