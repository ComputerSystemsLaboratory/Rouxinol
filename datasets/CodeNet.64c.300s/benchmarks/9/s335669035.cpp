#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int week;
    cin >> week;

    double pay = 100.0;
    for(int i = 0; i < week; i++)
    {
        pay = ceil(pay * 1.05);
    }
    cout << static_cast<int>(pay * 1000) << endl;
}