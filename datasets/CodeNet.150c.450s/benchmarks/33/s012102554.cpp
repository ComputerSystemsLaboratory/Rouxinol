#include <iostream>
#include <algorithm>

using namespace std;
int tax(int x, double p)
{
	return p*(100.0+x)/100;
};
int main() {
	int x, y, s;
	while(cin >> x >> y >> s && x != 0)
	{
		int max_price = 0;
		for(int i = 1; i < s; i++)
		{
			for(int j = i; j < s; j++)
			{
				if(tax(x,i)+tax(x,j) == s)
				{
					int temp = tax(y, i) + tax(y, j);
					max_price = max(max_price, temp);
				}
			}
		}
		cout << max_price << endl;
	}
}
