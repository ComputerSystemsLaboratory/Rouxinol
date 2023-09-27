#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int power(int m, int n, int d)
{
    long long int tmp;

    if (n == 0) {
        return 1;
    }
    else {
        tmp = power(m, n / 2, d);
        if (n % 2 == 0) {
            tmp = (tmp * tmp) % d;
        }
        else {
            tmp = (((tmp * tmp) % d) * m) % d;
        }
    }
    return tmp;
}

int main()
{
    int m, n;

    cin >> m >> n;
    cout << power(m, n, 1000000007) << endl;
}