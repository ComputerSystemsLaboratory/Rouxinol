#include <bitset>
#include <iostream>
#include <string>

using namespace std;

bitset<1000000 + 1> b, t;

int main()
{
    t.set();
    t[0] = false;
    t[1] = false;
    int i = 0;
    while (true) {
        bool done = false;
        while (!t[i]) {
            ++i;
            if (i == t.size()) {
                done = true;
                break;
            }
        }
        if (done) {
            break;
        }

        b[i] = true;
        for (int j = i; j < t.size(); j += i) {
            t[j] = false;
        }
    }

    while (true) {
        int a, d, n;
        cin >> a >> d >> n;
        if (a == 0 && d == 0 && n == 0) {
            return 0;
        }

        int count = 0;
        while (true) {
            if (b[a]) {
                count += 1;
                if (count == n) {
                    cout << a << endl;
                    break;
                }
            }
            a += d;
        }
    }
}