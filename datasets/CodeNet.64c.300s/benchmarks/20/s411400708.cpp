#include <iostream>
using namespace std;
int main(void)
{
    int d;
    while (cin >> d)
    {
        int f = 0;
        int n = 1;
        while (n*d <= 600 - d)
        {
            f += n * d * n * d * d;
            n++;
        }
        cout << f << endl;
    }
    return 0;
}

