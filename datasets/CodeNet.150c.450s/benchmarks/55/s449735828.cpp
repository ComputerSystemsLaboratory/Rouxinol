#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ma;
	while (cin >> ma)
	{
		if (ma=="0")break;
		int sum = 0;
		for (int i = 0; i < ma.length(); i++)
			sum += (static_cast<int>(ma[i])-48);
		cout << sum << endl;
	}
	return 0;
}
