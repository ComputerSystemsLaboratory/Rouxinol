#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    while (a != 0 || b != 0)
    {
        if (b < a)
        {
            int tmp = a;
            a = b;
            b = tmp;
        }
        cout << a << ' ' << b << endl;
        cin >> a >> b;
    }
    return 0;
}