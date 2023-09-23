#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int h = x / 3600;
    int m = (x / 60) % 60;
    int s = x % 60;
    cout << h << ':' << m << ':' << s << endl;

    return 0;
}