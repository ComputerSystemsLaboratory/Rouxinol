#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, m, i, j, k;
	char a[80], b[80], c;
	string str;
	bool flg = false;
	while (cin >> n && n)
	{
		str = "";
		for (i = 0; i < n; i++)
		{
			cin >> a[i] >> b[i];
		}
		cin >> m;
		for (i = k = 0; i < m; i++)
		{
			cin >> c;
			for (j = flg = 0; j < n && !flg; j++)
			{
				if (c == a[j])
				{
					str +=  b[j];
					flg = true;
				}
			}
			if (!flg)
				str += c;
		}
		cout << str << endl;
	}
	return 0;
}