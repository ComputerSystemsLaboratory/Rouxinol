#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int number_of_instruction;
	cin >> number_of_instruction;

	for (int i = 0; i < number_of_instruction; ++i)
	{
		string instruction;
		int param1, param2;
		string temp_str = "";
		string replace_str = "";
		cin >> instruction >> param1 >> param2;

		if (instruction == "print")
		{
			for (int i = param1; i <= param2 ; ++i)
			{
				temp_str += str[i];
			}
			cout << temp_str << endl;
		}

		if(instruction == "reverse")
		{
			for (int i = 0; i < param1; ++i)
			{
				temp_str += str[i];
			}
			for (int i = param2; i >= param1; --i)
			{
				temp_str += str[i];
			}
			for (int i = param2+1; i < str.size(); ++i)
			{
				temp_str += str[i];
			}
			str = temp_str;
		}

		if(instruction == "replace")
		{
			string replace_str;
			cin >> replace_str;
			str.replace(param1, param2 - param1 + 1, replace_str);
		}

	}
}