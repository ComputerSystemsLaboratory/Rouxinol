#include<iostream>

using namespace std;

int main()
{
	while (1){
		int kaisu, ten1 = 0, ten2 = 0;
		cin >> kaisu;
		if (kaisu == 0)break;
		while (kaisu--)
		{
			int x, y;
			cin >> x >> y;
			if (x > y)
			{
				ten1 += x + y;
			}
			else if (x < y)
			{
				ten2 += x + y;
			}
			else
			{
				ten1 += x;
				ten2 += y;
			}
		}
		cout << ten1 << " " << ten2 << endl;;
	}
	return 0;
}