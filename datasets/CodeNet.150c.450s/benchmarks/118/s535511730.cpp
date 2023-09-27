#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
using namespace std;

typedef long long int lint;

int calc(int year, int month, int day);

int main()
{
	int nCase = 0, year = 0, month = 0, day = 0;
	scanf("%d", &nCase);
	while(nCase-- > 0)
	{
		scanf("%d %d %d", &year, &month, &day);
		printf("%d\n", calc(1000, 1, 1) - calc(year, month, day));
	}
	return 0;
}

int calc(int year, int month, int day)
{
	int ans = 0;
	ans += (year - 1) / 3 * 590;
	int tmp = (year - 1) % 3;
	ans += tmp * 195;
	if(tmp < 2)
		ans += (month - 1) / 2 * 39 + (month - 1) % 2 * 20 + day;
	else
		ans += (month - 1) * 20 + day;
	return ans;
}