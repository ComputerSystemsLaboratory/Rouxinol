#include <iostream>
using namespace std;
int main()
{
	const int month[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	while(1)
	{
		int a,b,count=0;
		cin >> a >> b;
		if(a==0&&b==0)break;
		for(int i=0;i<(a-1);i++)
		{
			count += month[i];
		}
		count += b;
		count %= 7;
		switch(count)
		{
			case 1:cout << "Thursday" << endl;break;
			case 2:cout << "Friday" << endl;break;
			case 3:cout << "Saturday" << endl;break;
			case 4:cout << "Sunday" << endl;break;
			case 5:cout << "Monday" << endl;break;
			case 6:cout << "Tuesday" << endl;break;
			case 0:cout << "Wednesday" << endl;break;
		}
	}
	return 0;
}