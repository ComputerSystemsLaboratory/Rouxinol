#include <iostream>
#include <string>
using namespace std;
 int main()
{
	//arrays with number of days in month and the days names
    int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    int month, day;
    while(cin >> month >> day, month||day)//entering day
	{
		
        int n = 0;
        for(int i=1; i<month; i++)
		{
            n += days[i-1];
        }
        n += day;
 
        n %= 7;
        cout << week[n] <<endl;//printing the day
 
    }
  return 0;
}
  