#include <math.h>
#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <string>

#define YES "YES"
#define NO "NO"
#define space ' '

using namespace std;

void func();

int main(void)
{
	
	func();

	return 0;
}


void func()
{
	

	int n, cnt;
	
	while (cin >> n, !cin.eof()){
		cnt = 0;

		for (int i = 0; i < 10; i++)
		{
			for (int ii = 0; ii < 10;ii++)
			{
				for (int iii = 0; iii < 10;iii++)
				{
					for (int iiii = 0; iiii < 10;iiii++)
					{
						if ((i + ii + iii + iiii) == n)
						{
							cnt++;
							break;
						}

					}
				}
			}
		}

		cout << cnt << endl;
	}
}