#include <iostream>
using namespace std;

int main()
{
	double x[4], y[4];
	while(true)
	{
		for(int i = 0; i < 4; i++)
		{
			if(!(cin >> x[i] >> y[i])) return 0;
		}
		
		double a = (x[1] - x[0]) * (y[3] - y[0]) - (y[1] - y[0]) * (x[3] - x[0]);
		double b = (x[2] - x[1]) * (y[3] - y[1]) - (y[2] - y[1]) * (x[3] - x[1]);
		double c = (x[0] - x[2]) * (y[3] - y[2]) - (y[0] - y[2]) * (x[3] - x[2]);
		
		if((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
		{
			cout << "YES" << endl;
		}
		else 
		{
			cout << "NO" << endl;
		}
	}
	
	return 0;
}