#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, com, s2;
	int n,a,b;

	cin >> s1 >> n;
	for ( int i = 0; i < n; i++ )
	{
		cin >> com >> a >> b;
		if ( com == "print" )
			{
				cout << s1.substr(a, b-a+1) <<endl;
			}	
		else if ( com == "replace" )
		{
			cin >> s2;
			s1 = s1.replace(a, b-a+1, s2);
		}
		else if ( com == "reverse" )
			{
				string s3 = s1.substr(a, b-a+1);
				int m = s3.size();
				for (int k = 0; k < m; k++)
				{
					s1[a+k] = s3[m-1-k];
				}
			}
		}
	return 0;
}
