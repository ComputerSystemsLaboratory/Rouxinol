#include <iostream>
#include <vector>
using namespace std;

int curve(int x)
{
    return x * x;
}

int integral(int d)
{
    int area = 0;
    for (int i = 0; i < 600 / d; i++)
    {
        area += curve(d * i) * d;
    }
    return area;
}

int main()
{
    int d;
    while (cin >> d)
    {
        cout << integral(d) << endl;
    }
    return 0;
}
