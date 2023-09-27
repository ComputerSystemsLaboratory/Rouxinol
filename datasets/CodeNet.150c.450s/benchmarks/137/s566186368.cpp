#include <map>
#include <iostream>
using namespace std;

void C()
{
	map<string, bool> dictionary;
	int N;
	cin >> N;
	char command[20],data[20];
	for (int i = 0; i < N; i++)
	{
		cin >> command;
		cin >> data;

		if (command[0] == 'i')
		{
			string key = data;
			dictionary[key] = true;
		}
		else if (command[0] =='f')
		{
			string key = data;
			if (dictionary.find(key) == dictionary.end())
			{
				cout << "no" << endl;
			}
			else
			{
				cout << "yes" << endl;
			}
		}
	}

}
int main()
{
	C();
	return 0;
}