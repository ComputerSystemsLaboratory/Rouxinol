#include <iostream>

using namespace std;

int main()
{
    int y;
    long long int x = 1;
    cin >> y;

    while(y != 1)
    {
        x = x*y;
        y--;
    }
    cout << x << endl;
}