#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

#define rep(i,n) for (int i = 0; i < (n); ++i)

int n, m;
string u[257], t;
bool is_locked = true, flag;

int main(void) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n;
    rep(i,n) {
        cin >> u[i];
    }
    cin >> m;
    rep(i,m) {
        cin >> t;
        flag = false;
        rep(j,n) {
            if (u[j] == t) {
                if (is_locked) {
                    cout << "Opened by " << t << endl;
                    is_locked = false;
                } else {
                    cout << "Closed by " << t << endl;
                    is_locked = true;
                }
                flag = true;
                break;
            }
        }
        if (!flag) cout << "Unknown " << t << endl;
    }
    return 0;
}