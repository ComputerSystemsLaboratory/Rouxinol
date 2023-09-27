#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100000] = {0};
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            a[x] += y;
        }
        else {
            int sum=0;
            for (int j = x; j <= y; j++) {
                sum += a[j];
            }
            cout << sum << endl;
        }
    }
    return 0;
}