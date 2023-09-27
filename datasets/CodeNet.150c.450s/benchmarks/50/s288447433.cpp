#include <iostream>

using namespace std;

const int m[] = {500, 100, 50, 10, 10, 5, 1};

int main()
{
    int inp;

    while (cin >> inp, inp) {
        int ans = 0;

        inp = 1000 - inp;
        for (int i = 0; i < 7; i++) {
            if (inp <= 0)
                break;
            else if (inp / m[i]) {
                ans += inp / m[i];
                inp = inp % m[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}