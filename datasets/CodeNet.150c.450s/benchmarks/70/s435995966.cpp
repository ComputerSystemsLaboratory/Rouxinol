#include <iostream>

using namespace std;
int MONTH[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char day_of_the_week[32][32] = {{"Thursday"},
								{"Friday"},
								{"Saturday"},
								{"Sunday"},
								{"Monday"},
								{"Tuesday"},
								{"Wednesday"},
};
void solve()
{
	int month, day;
	while(cin >> month >> day, month || day)
	{
		int sum = 0;
		for(int i = 0; i < month - 1; ++i)
		{
			sum += MONTH[i];
		}
		sum += day - 1;
		cout << day_of_the_week[sum % 7] << endl;
	}
}

int main()
{
	solve();
	return(0);
}