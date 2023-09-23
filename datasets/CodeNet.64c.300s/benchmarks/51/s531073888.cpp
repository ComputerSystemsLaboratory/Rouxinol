#include <iostream>

using namespace std;

int main()
{
        unsigned long n, ans = 1;

        cin >> n;
        for (unsigned long i = n; i > 0; i--) {
                ans *= i;
        }
        cout << ans << endl;

        return 0;
}