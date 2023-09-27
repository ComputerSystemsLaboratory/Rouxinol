#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, a, b) for (int i = a; i < b; i++)
//'A' = 65, 'Z' = 90, 'a' = 97, 'z' = 122

struct dice{
    int s[6];
    void roll(char c) {
        int tmp;
        if (c == 'E') {
            tmp = s[0];
            s[0] = s[3];
            s[3] = s[5];
            s[5] = s[2];
            s[2] = tmp;
        } else if (c == 'W') {
            tmp = s[0];
            s[0] = s[2];
            s[2] = s[5];
            s[5] = s[3];
            s[3] = tmp;
        } else if (c == 'N') {
            tmp = s[0];
            s[0] = s[1];
            s[1] = s[5];
            s[5] = s[4];
            s[4] = tmp;
        } else {
            tmp = s[0];
            s[0] = s[4];
            s[4] = s[5];
            s[5] = s[1];
            s[1] = tmp;
        }
    }
    int top() {
        return s[0];
    }
    int front() {
        return s[1];
    }
    int right() {
        return s[2];
    }
    int left() {
        return s[3];
    }
    int back() {
        return s[4];
    }
    int bottom() {
        return s[5];
    }
};

int main()
{
    dice d;
    rep(i, 0, 6) cin >> d.s[i];
    int q;
    cin >> q;
    rep(i, 0, q) {
        int x, y;
        cin >> x >> y;
        if (d.front() != y) {
            if (d.right() != y && d.left() != y) {
                rep(j, 0, 3) {
                    d.roll('N');
                    if (d.front() == y) break;
                }
            } else {
                d.roll('E');
                rep(j, 0, 3) {
                    d.roll('N');
                    if (d.front() == y) break;
                }
            }
        }
        if (d.top() != x) {
            rep(j, 0, 3) {
                d.roll('E');
                if (d.top() == x) break;
            }
        }
        cout << d.right() << endl;
    }
    return 0;
}

