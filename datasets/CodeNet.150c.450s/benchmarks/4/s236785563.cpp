#include<iostream>
using namespace std;

int main() {
        int m[1000], f[1000], r[1000], s[1000], i, j;
        for(i = 0; i < 1000; i++) {
                cin >> m[i] >> f[i] >> r[i];
                if (m[i] == -1 && f[i] == -1 && r[i] == -1) break;
        }
        for(j = 0; j < i; j++) {
                s[j] = m[j] + f[j];
                if (m[j] == -1 || f[j] == -1 || s[j] < 30) cout << "F" << endl;
                else if (s[j] < 50) {
                        if (r[j] < 50) cout << "D" << endl;
                        else cout << "C" << endl;
                }
                else if (s[j] < 65) cout << "C" << endl;
                else if (s[j] < 80) cout << "B" << endl;
                else cout << "A" << endl;
        }
        return 0;
}