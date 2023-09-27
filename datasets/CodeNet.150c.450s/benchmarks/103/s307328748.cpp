#include <iostream>
#include <algorithm>

using namespace std;

int ans(int n, int m, int x);

int main()
{
    int n, m;
    while (cin >> n >> m, n!=0) {
        cout << ans(n, m, 0) << endl;
    }
    return 0;
}

int ans(int n, int m, int x)
{
    int a = 0;
    if (n == 0 && m == 0) {
        return 1;
    } 
    for (int i = x; i < 10; i++) {
        if (m-i >= 0) {
            a += ans(n-1, m-i, i+1);
        }
    }
    return a;
}