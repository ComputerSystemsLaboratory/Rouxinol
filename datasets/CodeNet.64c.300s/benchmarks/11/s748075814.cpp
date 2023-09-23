#include <iostream>

using namespace std;

int main()
{
    int line;
    cin >> line;
    int hours = line / 3600;
    int minutes = (line / 60) % 60;
    int seconds = line % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}