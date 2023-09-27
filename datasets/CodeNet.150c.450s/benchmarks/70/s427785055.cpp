#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <math.h>
#include <map>

//#define PI 3.141592653589

using namespace std;


int m, d;
int nissuu[] = {31,29,31,30,31,30,31,31,30,31,30,31};
int sum;	//曜日を求める日までの通算日数

int main()
{
	while (1)
	{
		cin >> m >> d;
		if (m == 0) break;
		
		sum = 0;
		for (int i=0; i<m-1; i++)
		{
			sum += nissuu[i];
		}
		sum += d;
		//cout << "sum = " << sum << endl;
		if (sum % 7 == 1) cout << "Thursday" << endl;
		else if (sum % 7 == 2) cout << "Friday" << endl;
		else if (sum % 7 == 3) cout << "Saturday" << endl;
		else if (sum % 7 == 4) cout << "Sunday" << endl;
		else if (sum % 7 == 5) cout << "Monday" << endl;
		else if (sum % 7 == 6) cout << "Tuesday" << endl;
		else if (sum % 7 == 0) cout << "Wednesday" << endl;
	}
	
	return 0;
}