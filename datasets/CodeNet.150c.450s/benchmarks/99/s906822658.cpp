#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str1;
        string str2;
        cin >> str1 >> str2;
        int d = 1;
        int n1 = 0;
        for (const char c : str1) {
            if (c == 'm') {
                n1 += d * 1000;
                d = 1;
            } else if (c == 'c') {
                n1 += d * 100;
                d = 1;
            } else if (c == 'x') {
                n1 += d * 10;
                d = 1;
            } else if (c == 'i') {
                n1 += d * 1;
                d = 1;
            } else {
                d = c - '0';
            }
        }
        d = 1;
        int n2 = 0;
        for (const char c : str2) {
            if (c == 'm') {
                n2 += d * 1000;
                d = 1;
            } else if (c == 'c') {
                n2 += d * 100;
                d = 1;
            } else if (c == 'x') {
                n2 += d * 10;
                d = 1;
            } else if (c == 'i') {
                n2 += d * 1;
                d = 1;
            } else {
                d = c - '0';
            }
        }
        int n3 = n1 + n2;
        int num[4] = {1000, 100, 10, 1};
        char ch[4] = {'m', 'c', 'x', 'i'};
        for (int i = 0; i < 4; i++) {
            if (n3 >= num[i]) {
                int m = n3 / num[i];
                n3 = n3 % num[i];
                if (m == 1) {
                    cout << ch[i];
                } else {
                    cout << m << ch[i];
                }
            }
        }
        cout << endl;
    }
    return 0;
}