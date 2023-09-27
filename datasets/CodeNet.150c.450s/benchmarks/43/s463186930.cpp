#include<iostream>
using namespace std;

int main()
{
	int n;
	int i;
	
	while(1)
	{
		cin >> n;
		if(n == 0) break;
		int as=0,bs=0;
		for(i=0;i<n;i++)
		{
			int a =0,b = 0;
			cin >> a >> b;
			if(a==b)
			{
				as += a;
				bs += b;
			}
			else if(a>b)
			{
				as += (a+b);
			}
			else
			{
				bs += (a+b);
			}
		}
		cout << as << " " << bs << endl;

	}
	
	return 0;
}