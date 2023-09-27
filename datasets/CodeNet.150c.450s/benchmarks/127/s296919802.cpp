#include<iostream>
#include<string>
#include<set>
using namespace std;
string reverse(string source)
{
	string dict = "";
	for (signed int i = 0; i < source.size(); i++)
	{
		dict += source[source.size() - 1 - i];
	}

	return dict;
}
int main()
{
	char ch[73];
	int n;
	cin >> n;

	for (signed int i = 0; i < n; i++)
	{
		cin >> ch;
		string str = ch;
		set<string> Set;
		for (int j = 0; j < str.size() - 1; j++)
		{
			string s1 = str.substr(0,j+1);
			string s2 = str.substr(j + 1, str.size());
			Set.insert(s1+s2);
			Set.insert(s2+s1);
			if (s1.size() >= 2)
			{
				Set.insert(reverse(s1)+s2);
				Set.insert(s2 + reverse(s1));
			}

			if (s2.size() >= 2)
			{
				Set.insert(s1 + reverse(s2));
				Set.insert(reverse(s2) + s1);
			}
			if (s1.size() >= 2 && s2.size() >= 2)
			{
				Set.insert(reverse(s2) + reverse(s1));
				Set.insert(reverse(s1) + reverse(s2));
			}
		}

		std::cout << Set.size() << endl;

	}
	return 0;
}