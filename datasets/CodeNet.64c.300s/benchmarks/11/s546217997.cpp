#include<iostream>
using namespace std;

int main() {
    int hour, min, sec;
    cin >> sec;
    min = sec / 60;
    sec -= min * 60;
    hour = min / 60;
    min -= hour * 60;
    cout << hour << ":" << min << ":" << sec << endl;

    return 0;
}