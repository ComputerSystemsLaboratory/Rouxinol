#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <algorithm>

const float a=1.05;

using namespace std;



int main(void)
{
	int debt,week;
	scanf("%d",&week);
	debt=100000;
	for(int loop=1;loop<=week;loop++)
	{
		debt*=1.05;
		if(debt%1000!=0)
		{
			debt=debt-(debt%1000)+1000;
		}
	}
	printf("%d\n",debt);
	return 0; 
}