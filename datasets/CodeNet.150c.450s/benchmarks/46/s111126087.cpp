#include<iostream>
using namespace std;
int main()
{
	for (;;)
	{
		int n=0, x=0,A=0;
		cin >> n >> x;
		if (n == 0 && x == 0)
		{
			break;
		}
		for (int a = 1; a <= n;a++)
		{
			for (int b = a + 1; b <= n;b++)
			{ 
				for (int c = b+1; c <= n; c++)
				{
					if (x == a + b + c){A += 1;}
				}
			}
		}
		cout<< A<<endl;
	}
	return 0;
}