#include <iostream>
using namespace std;

int main(void)
{
    int a = 100000, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        a = a * 1.05;
        if (a % 1000 != 0)
            a += (1000 - a % 1000);
    }
    cout << a << endl;
    return 0;
}





