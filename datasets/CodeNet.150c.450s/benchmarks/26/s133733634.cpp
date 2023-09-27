#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int h, m, d;
    int a, b;
    while (cin >> a >> b)
    {
        if (((-1000 <= a) && (a <= 1000)) && ((-1000 <= b) && (b <= 1000)))
        {
            if (a < b)
            {
                cout << "a < b" << endl;
            }
            else if (a > b)
            {
                cout << "a > b" << endl;
            }
            else
            {
                cout << "a == b" << endl;
            }
        }
    }
    return (0);
}