#include "bits/stdc++.h"
using namespace std;

char c1[] = { ' ', '.', ',', '!', '?', };
char c2[] = { 'c', 'a', 'b', };
char c3[] = { 'f', 'd', 'e', };
char c4[] = { 'i', 'g', 'h', };
char c5[] = { 'l', 'j', 'k', };
char c6[] = { 'o', 'm', 'n', };
char c7[] = { 's', 'p', 'q', 'r', };
char c8[] = { 'v', 't', 'u', };
char c9[] = { 'z', 'w', 'x', 'y', };

char get_c(char a, int cnt) {
        if (a == '1') return c1[cnt % 5];
        if (a == '2') return c2[cnt % 3];
        if (a == '3') return c3[cnt % 3];
        if (a == '4') return c4[cnt % 3];
        if (a == '5') return c5[cnt % 3];
        if (a == '6') return c6[cnt % 3];
        if (a == '7') return c7[cnt % 4];
        if (a == '8') return c8[cnt % 3];
        if (a == '9') return c9[cnt % 4];
        return 0;
}

int main() {
        int n;
        cin >> n;
        while (n --) {
                string s;
                cin >> s;
                bool doing = false;
                int cnt = 0;
                char now;
                for (int i = 0; i < s.size(); i ++) {
                        if (s[i] != '0') {
                                doing = true;
                                cnt ++;
                                now = s[i];
                        } else {
                                if (!doing) continue;
                                else {
                                        cout << get_c(now, cnt);
                                }
                                doing = false;
                                cnt = 0;
                        }
                }
                cout << endl;
        }
        return 0;
}