#include<iostream>
#include<string>
#include<vector>

using namespace std;

string convert(string s)
{
	for(int i = 0; s[i] != '\0'; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = 'a' + (s[i] - 'A');
		}
		
		else if(s[i] == '.')
		{
			s.erase(s.begin() + i);
		}
		
	}
	return s;
}

int main()
{
	string word = "";
	int count = 0;
	
	cin >> word;
	word = convert(word);
	while(true)
	{
		string check = "";
		cin >> check;
		
		if(check == "END_OF_TEXT")
		{
			break;
		}

		check = convert(check);

		if(check == word)
		{
			count += 1;
		}
	}

	cout << count << endl;
}

