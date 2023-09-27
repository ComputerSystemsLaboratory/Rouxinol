#define _USE_MATH_DEFINES

#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm>


using namespace std;

/* cout << fixed << setprecision(5); */

int main()
{	
	long a,n,Ma,Mi,s;
	n = 0;
	
	cin >> n;
	Ma = -1000001;
	Mi = 1000001;
	s= 0;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (Ma<a)
		{
			Ma = a;
		}

		if (Mi>a)
		{
			Mi = a;
		}
		
		s = s + a;
	}
	
	cout << Mi << " " <<Ma << " " <<s << endl;


	

	return 0;
}