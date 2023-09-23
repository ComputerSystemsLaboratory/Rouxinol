#include <iostream>

using namespace std;

int main()
{
        int n;

        while (cin >> n) {
                int ans = 0;
                if (n <= 9) {
                        for (int a = 0; a <= n; a++)
                                for (int b = 0; b <= n; b++)
                                        for (int c = 0; c <= n; c++)
                                                for (int d = 0; d <= n; d++)
                                                        if (a + b + c + d == n)
                                                                ans++;
                }
                else {
                        for (int a = 0; a <= 9; a++)
                                for (int b = 0; b <= 9; b++)
                                        for (int c = 0; c <= 9; c++)
                                                for (int d = 0; d <= 9; d++)
                                                        if (a + b + c + d == n)
                                                                ans++;

                }
                cout << ans << endl;
        }

        return 0;
}