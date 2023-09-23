#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void call(int n);

int main()
{
    int n;
    cin >> n;

    call(n);

    return 0;
}

void call(int n)
{
    int i = 1;

    while (i++ < n) {
        int x = i;

        // divided by 3
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }

        // include 3
        do {
            if (x % 10 == 3) {
                cout << " " << i;
                break;
            }
        } while ((x /= 10) > 0);

    }

    cout << endl;
}