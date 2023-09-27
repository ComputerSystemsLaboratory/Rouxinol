#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n) {
        int d = n;
        long long res = 0;
        while (d < 600) {
            long long y = d * d;
            res += n * y;
            d += n;
        }
        cout << res << endl;
    }
    return 0;
}