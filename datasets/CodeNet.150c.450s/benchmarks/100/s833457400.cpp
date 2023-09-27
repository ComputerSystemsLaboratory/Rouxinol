#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    long long res = 1;

    while (n--) {
        res *= (n + 1);
    }

    cout << res << endl;

    return 0;
}