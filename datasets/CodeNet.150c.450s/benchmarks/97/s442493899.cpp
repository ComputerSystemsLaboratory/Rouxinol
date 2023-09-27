#include <iostream>

using namespace std;

int x[200];
int y[200];

int n;

int ni;
int di;

int main()
{
	int left=0;
	int right=0;
	int up=0;
	int down=0;
	
	cin >> n;
	while(n)
	{
		x[0] = 0;
		y[0] = 0;
		
		left = 0;
		right = 0;
		up = 0;
		down = 0;
		
		for (int i=1;i<n;++i)
		{
			cin >> ni >> di;
			
			if (di == 0)
			{
				x[i] = x[ni] -1;
				y[i] = y[ni];
			}
			
			if (di == 1)
			{	
				x[i] = x[ni];
				y[i] = y[ni] -1;
			}
			
			if (di == 2)
			{
				x[i] = x[ni] +1;
				y[i] = y[ni];
			}
			
			if (di == 3)
			{
				x[i] = x[ni];
				y[i] = y[ni]+1;
			}
			
			if (x[i] > right) right = x[i];
			if (x[i] < left) left = x[i];
			
			if (y[i] > up) up = y[i];
			if (y[i] < down) down = y[i];
			
		}
		
		cout << (right - left + 1) <<" "<< (up - down +1) <<endl;
		
		cin >>n;
	}
}