#include <iostream>

using namespace std;

int main()
{
        int n;
        cin >> n;
        if (n <= 1) {
                cout << 1 << endl;
                return 0;
        }

        int *fib = new int[n + 1];
        fib[0] = fib[1] = 1;
        for (int i = 2; i <= n; i++) {
                fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << fib[n] << endl;
        delete [] fib;

        return 0;
}