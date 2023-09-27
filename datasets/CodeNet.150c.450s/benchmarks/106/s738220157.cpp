#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int aw = 0;
	cin >> a >> b >> c;
	for (int i = a; i <= b; i++)
	{
		if (c % i == 0)
		{
			aw++;
		}
	}
	cout << aw << endl;
	
	return 0;
}