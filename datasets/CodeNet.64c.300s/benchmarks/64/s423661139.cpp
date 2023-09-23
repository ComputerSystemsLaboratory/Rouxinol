#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}

int gcd(int a, int b)
{
    if (a < b) {
        int tmp = b;
        b = a;
        a = tmp;
    }
    int r;
    do {
        r = a % b;
        a = b;
        b = r;
    } while (r != 0);
    return a;
}