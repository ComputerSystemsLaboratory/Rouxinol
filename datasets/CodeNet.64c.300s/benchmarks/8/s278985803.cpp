#include <iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	int i = 4;
	cout << " 3";
	while (i <= x)
	{
		int k = i;
		if (i % 3 == 0)
			cout <<" "<<i;
		else
		{
			while (k != 0)
			{
				if (k % 10 == 3)
				{
					cout <<" "<<i;
					break;
				}
				k = k/10;
			}
		}
		i ++;
	}
	cout<<endl;
	return 0;
}