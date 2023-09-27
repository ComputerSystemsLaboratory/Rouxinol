#include <iostream>
using namespace std;

const string DAYS_OF_WEEK[7] = {"Thursday",
                                "Friday",
                                "Saturday",
                                "Sunday",
                                "Monday",
                                "Tuesday",
                                "Wednesday"};

const int FIRST_DAY_NUM[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

int main()
{
    int m;
    int d;
    while(1)
    {
        int day_num;
        cin >> m >> d;
        if(m == 0 && d == 0)
        {
            break;
        }
        /* calculate nunmber of days from Jan 1 */
        day_num = FIRST_DAY_NUM[m - 1] + d - 1;
        cout << DAYS_OF_WEEK[day_num % 7] << endl; 
    }
    return 0;
}

