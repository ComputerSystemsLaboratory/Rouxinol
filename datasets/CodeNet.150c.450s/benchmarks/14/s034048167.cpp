#include <iostream>
using namespace std;

void call(int n)
{
    for (int i = 1; i <= n; ++i) {
        int x = i;
        if (x % 3 == 0)
            cout << " " << i;
        else
            do {
                if (x % 10 == 3) {
                    cout << " " << i;
                    x = 0;
                }
                else x /= 10;
            } while (x);
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    call(n);
}