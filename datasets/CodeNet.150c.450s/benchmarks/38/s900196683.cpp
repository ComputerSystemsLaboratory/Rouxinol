#include <iostream>
#include <algorithm>
using namespace std;

bool isRTri(int a, int b, int c)
{
    return a * a + b * b == c * c;
}

int main()
{
    int n;
    cin >> n;
    for (int k = 1; k <= n; k++)
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        bool r = isRTri(a[0], a[1], a[2]);
        cout << (r ? "YES" : "NO") << endl;
    }
    return 0;
}