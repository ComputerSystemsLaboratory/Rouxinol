#include <iostream>

using namespace std;

int main()
{
    int a, b, ans;
    while (cin >> a >> b) {
        int c = a + b;
        for (ans = 1; c /= 10; ans++)
            ;
        cout << ans << endl;
    }
}