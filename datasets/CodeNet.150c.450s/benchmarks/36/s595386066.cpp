#include <iostream>

using namespace std;

int f(int x)
{
        return x*x;
}

int main()
{
        int d;

        while (cin >> d) {
                unsigned int ans = 0;
                for (int i = d; i < 600; i+=d) {
                        ans += f(i) * d;
                }
                cout << ans << endl;
        }

        return 0;
}