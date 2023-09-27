#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string s1, s2;
	int n = 0;
	int a = 0;
	int b = 0;

	cin >> n;
	for ( int i = 0; i <n; i++ )
	{
		cin >> s1 >> s2;
		if ( s1 > s2 )
		{
			a = a + 3;
		}
		else
		{
			if ( s1 < s2 )
			{
				b = b + 3;
			}
			else
			{
				a++;
				b++;
			}
		}
	}

	cout << a << " " << b << endl;

	return 0;
}
