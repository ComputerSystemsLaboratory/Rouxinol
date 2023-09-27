#include <cstdio>
using namespace std;

int main(void)
{
	int month, day, sum = 0, s_y = 3;
	int m_and_D[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char select_y[7][10] = 
	{"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	while(scanf("%d %d",&month, &day) && month > 0)
	{
		s_y = 3;
		sum = 0;
		for(int f1 = 1; f1 < month; f1++)
		{
			sum += m_and_D[f1];
		}

		sum += day - 1;
		s_y = (sum + s_y) % 7;

		printf("%s\n",select_y[s_y]);
	}
	return 0;
}