#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int asw = 1;
    int tmp;
    if (a > b) {
        while (b >= asw) {
            if (!(b % asw)) {
                tmp = b / asw;
                if (!(a % tmp))
                    break;
            }
            asw++;
        }
    } else {
        while (a >= asw) {
            if (!(a % asw)) {
                tmp = a / asw;
                if (!(b % tmp))
                    break;
            }
            asw++;
        }
    }
    return tmp;
}

int LCM(int a, int b)
{
    int asw;
    if (a < b) {
        asw = b;
        while (asw % a)
            asw += b;
    } else {
        asw = a;
        while (asw % b)
            asw += a;
    }
    return asw;
}

int main()
{
    int a, b;
    while ((cin >> a >> b)) {
        cout << GCD(a, b) << ' ' << LCM(a, b) << endl;
    }
}