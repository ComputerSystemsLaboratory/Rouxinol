#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x;
    cin >> y;

    int area = x*y;
    int outer = x+x+y+y;

    cout << area << " " << outer << endl;

    return 0;
}