#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string n, t;
	int h;
	int cnt;
	while (cin >> t)
	{
		//cout << "DEBUG:t=" << t << endl;
		if (t[0] == '-')
		{
			cout << n << endl;
			break;
		}
		
		if (isdigit(t[0]))
		{
			//cnt = (int)t[0] - '0';
			cnt = atoi(t.c_str());
			//cout << "DEBUG: COUNT=" << cnt << endl;
			
			for (int i = 0; i < cnt; i++)
			{
				int h;
				cin >> t;
				h = atoi(t.c_str());
				//h = (int)t[0] - '0';
				
				string sl = n.substr(0, h);
				string sr = n.substr(h);
				n = sr + sl;
			}
			//cout << "DEBUG: n=" << n << endl;
		}
		else
		{
			//cout << "DEBUG*2" << endl;

			if (!n.empty())
				cout << n << endl;
			n = t;
			continue;
		}
	}
	
	return 0;
	
}