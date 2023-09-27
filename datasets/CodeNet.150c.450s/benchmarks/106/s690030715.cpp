#include <iostream>

using namespace std;

int main(void)
{
    u_int a, b, c;
    cin >> a >> b >> c;
    u_int count = 0;
    while (a <= b)
        if (c % a++ == 0)
            count++;

    cout << count << endl;

    return 0;
}