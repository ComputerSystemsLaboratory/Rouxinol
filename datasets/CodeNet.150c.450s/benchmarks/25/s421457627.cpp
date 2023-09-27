#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	while(1)
	{
		string tmp;
		getline (cin,tmp);
		input += tmp;
		if(cin.eof())
		{
			break;
		}
	}
	for(int i=0; i<input.length(); i++)
	{
		if('A'<=input[i] && input[i]<='Z')
		{
			input[i] = input[i]-'A'+'a';
		}
	}
	for(char i='a'; i<='z'; i++)
	{
		int count=0;
		for(int i2=0; i2<input.length(); i2++)
		{
			if(i == input[i2])
			{
				count +=1;
			}
		}
		cout << i << " : " << count << endl;
	}
	return 0;
}