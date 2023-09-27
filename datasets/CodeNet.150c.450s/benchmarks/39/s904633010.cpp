#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b;
    int s, d;
    while (cin >> a >> b)
    {
        if ((1 <= a && a <= 100) && (1 <= b && b <= 100))
        {
            s = a * b;
            d = (a + b) * 2;
            cout << s << " " << d << endl;
        }
    }
    return (0);
}