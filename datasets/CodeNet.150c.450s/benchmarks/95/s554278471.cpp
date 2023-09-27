
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <functional>

using namespace std;

string str[101];

int main()
{
	int n;

	
	while(cin >> n && n)
	{
		bool flag = false;
		int a[2] = {0,0};
		int sum = 0; 

		for(int i = 0;i < n;i++)
		{
			cin >> str[i];
		}
		
		for(int i = 0;i < n;i++)
		{
			if(flag)
			{
				if(str[i] == "ld")
				{
					a[0] = 0;
				}else
				if(str[i] == "rd")
				{
					a[1] = 0;
				}
				if(str[i] == "lu")
				{
					a[0] = 1;
				}else
				if(str[i] == "ru")
				{
					a[1] = 1;
				}

				if(!a[0] && !a[1])
				{
					flag = false;
					sum++;
				}

			}else
			{
				if(str[i] == "ld")
				{
					a[0] = 0;
				}else
				if(str[i] == "rd")
				{
					a[1] = 0;
				}
				if(str[i] == "lu")
				{
					a[0] = 1;
				}else
				if(str[i] == "ru")
				{
					a[1] = 1;
				}

				if(a[0] && a[1])
				{
					flag = true;
					sum++;
				}
			}
		}

		cout << sum << endl;
	}


	return 0;
}