#include <iostream>
using namespace std;
int main(void)
{
    int y = 100000;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        y += y * 0.05;
        if (y % 1000 != 0)
        {
            y = ((y / 1000) + 1) * 1000;
        }
    }
    cout << y << endl;
}

