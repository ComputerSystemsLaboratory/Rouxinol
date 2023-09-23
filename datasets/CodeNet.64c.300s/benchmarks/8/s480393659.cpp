#include<iostream>
int main()
{
	int n;
	std::cin >> n;
	int i = 1;
	while(true)
	{
		static int x;
		static bool is_exe_CN = true, is_exe_I3, is_exe_ECN;
		if(is_exe_CN)
		{
			x = i;
			if(x % 3 == 0)
			{
				std::cout << ' ' << i;
				is_exe_I3 = false;
				is_exe_ECN = true;
			}
			else
			{
				is_exe_I3 = true;
			}
		}
		if(is_exe_I3)
		{
			if(x % 10 == 3)
			{
				std::cout << ' ' << i;
				is_exe_ECN = true;
			}
			else
			{
				x /= 10;
				if(x)
				{
					is_exe_ECN = false;
					is_exe_CN = false;
					is_exe_I3 = true;
				}
				else
				{
					is_exe_ECN = true;
				}
			}
		}
		if(is_exe_ECN)
		{
			if(++i <= n)
			{
				is_exe_CN = true;
			}
			else
			{
				std::cout << std::endl;
				break;
			}
		}
	}
	return 0;
}
