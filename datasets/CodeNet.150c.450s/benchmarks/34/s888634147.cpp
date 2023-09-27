#include <iostream>
using namespace std;

int main(void)
{
    int n;
    long long a[30] = {1, 2, 4};
    for (int i = 3; i < 30; i++) 
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    while (cin >> n && n) 
        cout << 1 + a[n-1] / 3650 << endl;

    return 0;
}