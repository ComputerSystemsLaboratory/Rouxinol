#include <iostream>
#include <string>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		int num1 = 0, num2 = 0;
		if(s1.size() == 1)
		{
			if(s1[0] == 'm')
			{
				num1 = 1000;
			}
			else if(s1[0] == 'c')
			{
				num1 = 100;
			}
			else if(s1[0] == 'x')
			{
				num1 = 10;
			}
			else if(s1[0] == 'i')
			{
				num1 = 1;
			}
		}
		else
		{
			for(int i = 0; i < s1.size(); ++i)
			{
				if(s1[i] == 'm')
				{
					if(i == 0 || s1[i - 1] < '2' || '9' < s1[i - 1])
					{
						num1 += 1000;
					}
					else if('2' <= s1[i - 1] && s1[i - 1] <= '9')
					{
						num1 += 1000 * (s1[i - 1] - '0');
					}
				}
				if(s1[i] == 'c')
				{
					if(i == 0 || s1[i - 1] < '2' || '9' < s1[i - 1] )
					{
						num1 += 100;
					}
					else if('2' <= s1[i - 1] && s1[i - 1] <= '9')
					{
						num1 += 100 * (s1[i - 1] - '0');
					}
				}
				if(s1[i] == 'x')
				{
					if(i == 0 || s1[i - 1] < '2' || '9' < s1[i - 1] )
					{
						num1 += 10;
					}
					else if('2' <= s1[i - 1] && s1[i - 1] <= '9')
					{
						num1 += 10 * (s1[i - 1] - '0');
					}
				}
				if(s1[i] == 'i')
				{
					if(i == 0 || s1[i - 1] < '2' || '9' < s1[i - 1] )
					{
						num1 += 1;
					}
					else if('2' <= s1[i - 1] && s1[i - 1] <= '9')
					{
						num1 += 1 * (s1[i - 1] - '0');
					}
				}
			}
		}
		if(s2.size() == 1)
		{
			if(s2 == "m")
			{
				num2 = 1000;
			}
			else if(s2 == "c")
			{
				num2 = 100;
			}
			else if(s2 == "x")
			{
				num2 = 10;
			}
			else if(s2 == "i")
			{
				num2 = 1;
			}
		}
		else
		{
			for(int i = 0; i < s2.size(); ++i)
			{
				if(s2[i] == 'm')
				{
					if(i == 0 || s2[i - 1] < '2' || '9' < s2[i - 1])
					{
						num2 += 1000;
					}
					else if('2' <= s2[i - 1] && s2[i - 1] <= '9')
					{
						num2 += 1000 * (s2[i - 1] - '0');
					}
				}
				if(s2[i] == 'c')
				{
					if(i == 0 || s2[i - 1] < '2' || '9' < s2[i - 1] )
					{
						num2 += 100;
					}
					else if('2' <= s2[i - 1] && s2[i - 1] <= '9')
					{
						num2 += 100 * (s2[i - 1] - '0');
					}
				}
				if(s2[i] == 'x')
				{
					if(i == 0 || s2[i - 1] < '2' || '9' < s2[i - 1] )
					{
						num2 += 10;
					}
					else if('2' <= s2[i - 1] && s2[i - 1] <= '9')
					{
						num2 += 10 * (s2[i - 1] - '0');
					}
				}
				if(s2[i] == 'i')
				{
					if(i == 0 || s2[i - 1] < '2' || '9' < s2[i - 1] )
					{
						num2 += 1;
					}
					else if('2' <= s2[i - 1] && s2[i - 1] <= '9')
					{
						num2 += 1 * (s2[i - 1] - '0');
					}
				}
			}
		}
		int ans = num1 + num2;
		if(ans >= 2000)
		{
			cout << ans / 1000 << "m";
		}
		else if(ans >= 1000)
		{
			cout << "m";
		}
		ans %= 1000;
		if(ans >= 200)
		{
			cout << ans / 100 << "c";
		}
		else if(ans >= 100)
		{
			cout << "c";
		}
		ans %= 100;
		if(ans >= 20)
		{
			cout << ans / 10 << "x";
		}
		else if(ans >= 10)
		{
			cout << "x";
		}
		ans %= 10;
		if(ans >= 2)
		{
			cout << ans << "i";
		}
		else if(ans >= 1)
		{
			cout << "i";
		}
		cout << endl;
	}
}

int main()
{
	solve();
	return(0);
}