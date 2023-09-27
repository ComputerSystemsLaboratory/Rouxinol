#include <iostream>
#include <string>
#include <set>
using namespace std;

typedef set<string> set_t;
set_t A;
int main()
{
	int n;
	string cmd,word;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> cmd >> word;
		if (cmd == "insert")
		{
			A.insert(word);
		}
		if (cmd == "find")
		{
			if (A.count(word)==1)
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
	return 0;

}

