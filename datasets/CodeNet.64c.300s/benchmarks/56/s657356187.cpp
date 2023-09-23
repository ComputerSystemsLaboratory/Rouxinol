#include <iostream>
#include <cstdio>
using namespace std;

int coun(int year, int month, int day);

int main(void)
{
	int n;
	int m;
	int d;
	int year;
	int month;
	int day;

	int sub;

	int i1;

	cin >> n;
	m = coun(1000, 1, 1);

	for(i1=0;i1<n;i1++){


		cin >> year >> month >> day;

		
		d = coun(year, month, day);

		sub = m - d;



		cout << sub << endl;
	}

	return 0;
}

int coun(int year, int month, int day)
{
	int i1;
	int d_n = 195;
	int d_unn = 200;
	int dai = 20;
	int syo = 19;
	int date = 0;


	for(i1=1;i1<year;i1++){
		if (i1%3==0){
			date += d_unn;
		}
		else {
			date += d_n;
		}
	}

	if (year%3 == 0){
		for(i1=1;i1<month;i1++){
			date += dai;
		}
	}
	else {
		for(i1=1;i1<month;i1++){
			if (i1%2==1){
				date += dai;
			}
			else{
				date += syo;
			}
		}
	}


	date += day;

	return date;
}