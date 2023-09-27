#include <iostream>
#include <complex>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(void)
{
    int a[6];
    string str;
    for (int i = 0; i < 6; ++i)
        cin >> a[i];
    cin >> str;
    for (auto itr = str.begin(); itr != str.end(); ++itr) {
        int tmp;
        switch (*itr) {
            case 'N':
                tmp = a[0];
                a[0] = a[1];
                a[1] = a[5];
                a[5] = a[4];
                a[4] = tmp;
                break;
            case 'S':
                tmp = a[0];
                a[0] = a[4];
                a[4] = a[5];
                a[5] = a[1];
                a[1] = tmp;
                break;
            case 'W':
                tmp = a[3];
                a[3] = a[0];
                a[0] = a[2];
                a[2] = a[5];
                a[5] = tmp;
                break;
            case 'E':
                tmp = a[2];
                a[2] = a[0];
                a[0] = a[3];
                a[3] = a[5];
                a[5] = tmp;
                break;
        }
    }
    cout << a[0] << endl;
    return 0;
}





