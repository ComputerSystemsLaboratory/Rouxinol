#include<iostream>

using namespace std;

int main()
{
	int n,a,b,c,x;
	while(cin >> n >> a >> b >> c >> x,n)
	{
		bool flag = false;
		int count = 0,i = 0;
		int y[n];
		for(int i = 0;i < n;i++)
		{
			cin >> y[i];
		}
		
		while(1)
		{
			if(x == y[i])
			{
				i++;
			}
			
			if(i == n)
			{
				cout << count << endl;
				break;
			}
			
			if(count == 10000)
			{
				cout << -1 << endl;
				break;
			}
			x = (a * x + b) % c;
			count++;
		}
		
	}
	
	return 0;
	
}