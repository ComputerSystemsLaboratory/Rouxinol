#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int taro[100], hanako[100], tsum, hsum;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)break;
        tsum = hsum = 0;
        for (int i = 0; i < a; i++) {
            cin >> taro[i];
            tsum += taro[i];
        }
        for (int i = 0; i < b; i++) {
            cin >> hanako[i];
            hsum += hanako[i];
        }

        int min = 201, x, y;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                int newt = tsum - taro[i] + hanako[j], newh = hsum - hanako[j] + taro[i];
                if (newt == newh && (taro[i] + hanako[j]) < min) {
                    min = taro[i] + hanako[j];
                    x = taro[i];
                    y = hanako[j];
                }
            }
        }

        if (min == 201)cout << -1 << endl;
        else cout << x << " " << y << endl;
    }
}