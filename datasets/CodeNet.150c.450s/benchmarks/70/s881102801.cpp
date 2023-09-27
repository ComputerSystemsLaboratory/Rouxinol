#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int month, day;
	int monthday[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	while(scanf("%d %d", &month, &day)!= EOF)
	{
		if(month == 0) break;
		for(int i = 0; i < month;i++)
		{
			day = day + monthday[i];
	}
		day = day % 7;
		
		switch(day){
		case 0 : cout << "Wednesday" << endl; break;
		case 1 : cout << "Thursday" << endl; break;
		case 2 : cout << "Friday" << endl; break;
		case 3 : cout << "Saturday" << endl; break;
		case 4 : cout << "Sunday" << endl; break;
		case 5 : cout << "Monday" << endl; break;
		case 6 : cout << "Tuesday" << endl; break;
		}
	}
	return 0;
}