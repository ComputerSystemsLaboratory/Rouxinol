#include<iostream>
#include<string>

using namespace std;

int main() {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;
        
        bool r = false;
        bool l = false;
        bool b = false;
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            if (s[0] == 'l') {
                if (s[1] == 'u') l = true; else l = false;
            } else {
                if (s[1] == 'u') r = true; else r = false;
            }
            if (l == r) {
                if (b == l) continue;
                b = l;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}