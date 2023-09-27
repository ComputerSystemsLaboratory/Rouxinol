#include <iostream>
#include <complex>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

void rotate(int a[], string str)
{
    for(auto itr = str.begin(); itr != str.end(); ++itr)
    {
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
}

int main(void)
{
    int a[6], q;
    string str;
    for (int i = 0; i < 6; ++i)
        cin >> a[i];
    cin >> q;

    int t, f;
    for (int i = 0; i < q; ++i) {
        cin >> t >> f;

        if (t == a[5])
                rotate(a, "NN");
        else if (t == a[1])
                rotate(a, "N");
        else if (t == a[3])
                rotate(a, "E");
        else if (t == a[2])
                rotate(a, "W");
        else if (t == a[4])
                rotate(a, "S");

        if (f == a[1])
                cout << a[2] << endl;
        else if (f == a[2])
                cout << a[4] << endl;
        else if (f == a[4])
                cout << a[3] << endl;
        else if (f == a[3])
                cout << a[1] << endl;
    }

    return 0;
}





