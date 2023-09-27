
#include<iostream>
using namespace std;

int main()
{
    int n, x;
    while (cin >> n >> x)
    {
        int count = 0;
        if (x == 0 && n == 0)
            break;
        int a, b, c;
        for (a = 1; a<n - 1; a++) {
            for (b = a + 1; b<n; b++) {
                for (c = b + 1; c <= n; c++) {
                    if ((a + b + c) == x&&a!=b&&b!=c&&c!=a)
                        count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;

}