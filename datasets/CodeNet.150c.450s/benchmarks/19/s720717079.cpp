#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> x; 
	vector<int> y;

	int num1, num2;

	int cnt = 0;
	int tmp;

	//Input x, y
	while(1)
	{
		cin >> num1 >> num2;
		
		if( (num1 == 0) && (num2 == 0) )
		{
			break;
		}

		x.push_back(num1);
		y.push_back(num2);
		
		cnt++;
	}

	for(int i = 0; i < cnt; i++)
	{
		if( x[i] >= y[i])
		{
			cout << y[i] << " " << x[i] << endl;
		}
		else
		{
			cout << x[i] << " " << y[i] << endl;
		}
	}

	return 0;
}