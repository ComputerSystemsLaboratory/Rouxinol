#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    string date[7] = { "Wednesday", "Thursday", "Friday", "Saturday",
        "Sunday", "Monday", "Tuesday",};
    int day[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};

    cin >> a >> b;

    while (a != 0 && b != 0) {
        b += day[a-1];
        cout << date[b%7] << endl;
        cin >> a >> b;
    }

    return 0;
}