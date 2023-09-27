#define scanf_s scanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 10
#define MIN -100001
#define _MAX 10
int main(void)
{
	char *days[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	int month_sum[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int month, day, sum = 0;
	while (1) {
		scanf_s("%d %d", &month, &day);
		if (month == 0) break;
		for (int i = 1; i < month; ++i) {
			sum += month_sum[i - 1];
		}
		sum += day;
		printf("%s\n", days[(sum + 2) % 7]);
		sum = 0;
	}
}