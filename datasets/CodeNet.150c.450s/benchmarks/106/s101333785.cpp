#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (i > c)
            break;
        if (c % i == 0)
            count++;
    }

    cout << count << endl;

    return 0;
}