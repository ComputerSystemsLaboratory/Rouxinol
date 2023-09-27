#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int hour = s / (60 * 60);
    int minute = (s - (hour * 60 * 60)) / 60;
    int second = (s % (60 * 60)) % 60;
    cout << hour << ':' << minute << ':' << second << endl;
    return 0;
}

