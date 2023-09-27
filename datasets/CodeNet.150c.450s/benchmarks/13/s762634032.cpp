#include <iostream>//c++??§aoj Ring
#include <string>
using namespace std;
int main(void)
{
	string s, p;
	cin >> s >> p;
	int a=0, count;

	for (int i=0;i<=s.size();i++)
	{
		count=0;

		if (p[0] == s[i])
		{
			for (int j=0;j<=p.size()-1;j++)
			{
				if (s.size() > i+j)
				{
					if (s[i+j] != p[j])
					{
						count++;
					}
				}
				else if (s.size() <= i+j)
				{
					if (s[i+j-s.size()] != p[j])
					{	
						count++;
					}
				}

				else if (count != 0)
				{
					break;
				}
			}

			if (count == 0)
			{
				a=1;
			}
		}
	}
	if (a==1)
	{
		cout << "Yes" << endl;
	}
	else if (a!=1)
	{
		cout << "No" << endl;
	} 

	return 0;
}