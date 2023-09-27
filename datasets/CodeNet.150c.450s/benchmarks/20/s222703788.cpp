#include <iostream>
using namespace std;

int main(void)
{
    int time;
    cin >> time;

    int hour, minute, second;

    hour = time / 3600;
    time -= hour * 3600;
    minute = time / 60;
    time -= minute * 60;
    second = time;

    cout << hour << ":"<< minute << ":" << second << endl;
}