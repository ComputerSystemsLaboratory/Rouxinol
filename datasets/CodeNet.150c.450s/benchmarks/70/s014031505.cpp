#include <iostream>

using namespace std;
int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void solve()
{
	int month, day;
	while(cin >> month >> day)
	{
		if(!month && !day)
		{
			break;
		}
		int sum = 0;
		for(int i = 0; i < month - 1; ++i)
		{
			sum += days[i];
		}
		sum += day - 1;
		sum %= 7;
		switch(sum)
		{
		case 0: cout << "Thursday"  << endl; break;
		case 1: cout << "Friday"    << endl; break;
		case 2: cout << "Saturday"  << endl; break;
		case 3: cout << "Sunday"    << endl; break;
		case 4: cout << "Monday"    << endl; break;
		case 5: cout << "Tuesday"   << endl; break;
		case 6: cout << "Wednesday" << endl; break;
		}
	}
}

int main()
{
	solve();
	return(0);
}