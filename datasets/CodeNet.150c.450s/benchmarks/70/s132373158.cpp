#include <iostream>
#include <string>
using namespace std;
int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string week[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

void solve()
{
	int m, d;
	while(cin >> m >> d, m || d)
	{
		int sum = 0;
		for(int i = 1; i < m; ++i)
		{
			sum += days[i - 1];
		}
		sum += d - 1;
		cout << week[sum % 7] << endl;
	}
}

int main()
{
	solve();
	return(0);
}