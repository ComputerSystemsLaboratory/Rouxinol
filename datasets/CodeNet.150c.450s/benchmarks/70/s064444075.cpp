#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
const int year = 2004;

string getDay(int mm, int dd)
{
    int yy = year;
    int ans;
    if(mm <= 2)
    {
        yy -= 1;
        mm += 12;
    }
    ans = (
        dd + ((8+(13 * mm))/5)
        + (yy + (yy / 4) - (yy / 100))
        + (yy / 400)
    ) % 7;

    switch(ans)
    {
        case 0:
            return "Sunday";
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
    }
}

int main()
{
    int mm, dd;
    while(1)
    {
        cin >> mm >> dd;
        if(mm == 0) break;
        cout << getDay(mm, dd) << endl;
    }

    return EXIT_SUCCESS;
}