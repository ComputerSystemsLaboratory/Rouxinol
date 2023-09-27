#include <iostream>
using namespace std;

int main(void)
{
	int yeardays[3]= {200, 195, 195};
	int monthdays[2]= {0, 20};

	int num;
	cin>>num;

	for(int i= 0; i < num; i++)
	{
		int year, month, day;
		cin>>year>>month>>day;

		long long int sum= 1;
		for(int j= year; j < 1000; j++)
			sum+= yeardays[j%3];

		if(year % 3 == 0)
			monthdays[0]= 20;
		else
			monthdays[0]= 19;
		for(int j= 1; j < month; j++)
			sum-= monthdays[j%2];
		sum-= day;

		cout<<sum<<endl;
	}
	return 0;
}			