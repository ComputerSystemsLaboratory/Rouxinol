#include <iostream>

using namespace std;

int main(void)
{
    while (true) {
        u_int n, x;
        cin >> n >> x;
        if (!n && !x)
            break;

        u_int count = 0;
        for (u_int a = 1; a <= n; a++)
            for (u_int b = a + 1; b <= n && a + b <= x; b++)
                for (u_int c = b + 1; c <= n && a + b + c <= x; c++)
                    if (a + b + c == x)
                        count++;

        cout << count << endl;
    }

    return 0;
}