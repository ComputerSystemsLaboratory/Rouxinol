#include <iostream>
#include <cstring>
using namespace std;

int md[12] = {0,31,29,31,30,31,30,31,31,30,31,30};
char* day[7] = {"Mon","Tues","Wednes","Thurs","Fri","Satur","Sun"};

int main()
{
	int m,d;
	while(cin >> m >> d, m||d)
	{
		for(int i=0; i<m; i++)
		{
			d+=md[i];
		}
		cout << day[(d+2)%7] << "day" << endl;

	}
}