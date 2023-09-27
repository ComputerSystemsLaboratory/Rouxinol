#include<iostream>
#include<string>
using namespace std;

int main()
{
	int count[30] = {0};
	char c;
	
	while((cin >> c))
	{
		if(c > 'z' || c < 'a')
		{
			count[c - 'A']++;
			continue;
		}
		count[c - 'a']++;
	}
	
	for(int i = 0; i < 26; i++)
	{
		cout << (char)('a' + i) << " : " << count[i] << endl;
	}
	
	return 0;
}