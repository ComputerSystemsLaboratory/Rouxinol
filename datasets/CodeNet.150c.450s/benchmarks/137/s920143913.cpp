#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, bool> T;
	int n;
	string com, str;
	cin >> n;
	for(int i = 0; i < n; ++ i)
	{
		cin >> com >> str;
		if(com[0] == 'i')
		{
			T[str] = true;
		}
		else if(com[0] == 'f')
		{
			if(T[str])	cout << "yes" << endl;
			else	cout << "no" << endl;
		}
	}
	
	return 0;
} 
