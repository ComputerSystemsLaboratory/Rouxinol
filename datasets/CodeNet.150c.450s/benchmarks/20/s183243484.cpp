#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    int h = 0, m = 0, s = 0;
    for(int i = 1; i <= x; i++) {
        s++;
        if(s == 60) {
            m++;
            s = 0;
        }
        if(m == 60) {
            h++;
            m = 0;
        }
    }
    cout << h << ":" << m << ":" << s << endl;
}
