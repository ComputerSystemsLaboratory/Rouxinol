#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int y, m, d;
		cin >> y >> m >> d;
		int sumDay = 0;
		int month1[10] = { 0,20,39,59,78,98,117,137,156,176 };
		int month2[10] = { 0,20,40,60,80,100,120,140,160,180 };
		int ly = 0, nly = 0;
		for (int i = 1; i < y; i++)
			(i % 3 == 0) ? (ly++) : (nly++);
		sumDay += sumDay + (ly * 200 + nly * 195);
		if (y % 3 != 0)
			sumDay += month1[m - 1];
		else
			sumDay += month2[m - 1];
		sumDay += d;
		int millDay = 196470;
		int day = millDay - sumDay+1;
		cout << day << endl;
	}
}
