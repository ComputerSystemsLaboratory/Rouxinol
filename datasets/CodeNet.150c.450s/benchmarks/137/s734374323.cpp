#include <iostream>
#include <set>
using namespace std;

int main() 
{
	int n = 0;
	cin >> n;

	set<string> dic;

	for (int i = 0; i < n; i++) 
	{
		string buf1, buf2;
		cin >> buf1 >> buf2;
		if (buf1 == "insert") 
		{
			dic.insert(buf2);
		}
		else
		{
			if (dic.find(buf2) != dic.end()) 
			{
				cout << "yes" << '\n';
			}
			else 
			{
				cout << "no" << '\n';
			}
		}
	}
	return 0;
}