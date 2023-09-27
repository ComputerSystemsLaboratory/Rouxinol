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
};

int main()
{
    dice d;
    rep(i, 0, 6) cin >> d.s[i];
    string order;
    cin >> order;
    int len = order.size();
    rep(i, 0, len) {
        d.roll(order[i]);
    }
    cout << d.top() << endl;
    return 0;
}

