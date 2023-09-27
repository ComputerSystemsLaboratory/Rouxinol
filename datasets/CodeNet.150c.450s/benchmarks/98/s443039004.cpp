#include<iostream>
using namespace std;

int main()
{
    while (1) {
        int n, m;
        bool found = false;
        int sumt = 0, sumh = 0;
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        int taro[100], hana[100];
        for (int i = 0; i < n; i++) {
            cin >> taro[i];
            sumt += taro[i];
        }
        for (int j = 0; j < m; j++) {
            cin >> hana[j];
            sumh += hana[j];
        }
        int ten = 201, a = 101, b = 101;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if ((sumt - taro[i] + hana[j]) == (sumh - hana[j] + taro[i])) {
                    if (ten > (taro[i] + hana[j])) {
                        found = true;
                        a = taro[i];
                        b = hana[j];
                        ten = taro[i] + hana[j];
                    }
                }
            }
        }
        if (found) {
            cout << a << " " << b << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}