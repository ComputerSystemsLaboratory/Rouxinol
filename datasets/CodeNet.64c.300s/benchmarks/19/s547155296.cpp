#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
        int a[5001] = { 0 };
        int n;
    while (1) {
        cin >> n;
        if (n == 0)break;
       // a[0] = 0;
        int maxv = -100000;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            a[i] = max(a[i], a[i] + a[i - 1]);
            maxv = max(maxv, a[i]);
        }
        cout << maxv << endl;
    }
}