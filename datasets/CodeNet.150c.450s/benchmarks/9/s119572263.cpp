#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string n, t;
	int cnt;
	while (cin >> t)
	{
		if (t[0] == '-')
		{
			//cout << n << endl;
			break;
		}
		
		if (isdigit(t[0]))
		{
			cnt = atoi(t.c_str());
			
			for (int i = 0; i < cnt; i++)
			{
				int h;
				cin >> t;
				h = atoi(t.c_str());
				
				string sl = n.substr(0, h);
				string sr = n.substr(h);
				n = sr + sl;
			}
			
			cout << n << endl;
		}
		else
		{
			//if (!n.empty())
				
			n = t;
			continue;
		}
	}
	
	return 0;
	
}