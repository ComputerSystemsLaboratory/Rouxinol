#include <iostream>

using namespace std;

const int MIN = 0;
const int MAX = 100;

    int
    main(int argc, char *argv[])
{
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (((MIN <= a) && (a <= MAX)) && ((MIN <= b) && (b <= MAX)) && ((MIN <= c) && (c <= MAX)))
        {
            if (a < b)
            {
                if (b < c)
                {
                    cout << "Yes" << endl;
                    continue;
                }
            }
            cout << "No" << endl;
        }
    }
}