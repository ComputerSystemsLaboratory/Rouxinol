#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	while (true)
	{
		int n;
		cin >> n;
		if (n == 0) break;
		vector<string> motions(n);
		for (int i = 0; i < n; i++)
		{
			cin >> motions[i];
		}
		if (n <= 1)
		{
			cout << 0 << endl;
		}
		else {
			int state = 0;
			int lstate = 0;
			int rstate = 0;
			int count = 0;
			for (auto motion : motions)
			{
				if (motion == "lu")
				{
					lstate = 1;
				}
				else if (motion == "ld")
				{
					lstate = 0;
				}
				else if (motion == "ru")
				{
					rstate = 1;
				}
				else if (motion == "rd")
				{
					rstate = 0;
				}
				if (lstate == 1 && rstate == 1)
				{
					if (state == 0)
					{
						count++;
					}
					state = 1;
				}
				else if (lstate == 0 && rstate == 0)
				{
					if (state == 1)
					{
						count++;
					}
					state = 0;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}