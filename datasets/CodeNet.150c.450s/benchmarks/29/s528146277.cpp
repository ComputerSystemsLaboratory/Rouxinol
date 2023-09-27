#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define len 1000050

int prev(int pos) {
    return (pos == 0) ? len - 1 : pos - 1;
}

int next(int pos) {
    return (pos == len - 1) ? 0 : pos + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;

    vector<int> li(len);
    int fi=0, la=0;

    string op;
    int key;
    for (int i=0; i<n; ++i) {
        cin >> op;
        if (op[0] == 'i') {
            cin >> key;
            fi = prev(fi);
            li[fi] = key;
        } else if (op.size() > 6 && op[6] == 'F') {
            while (li[fi] == -1) {
                fi = next(fi);
            }
            fi = next(fi);
        } else if (op.size() > 6 && op[6] == 'L') {
            while (li[prev(la)] == -1) {
                la = prev(la);
            }
            la = prev(la);
        } else {
            cin >> key;
            for (int j=fi; j!=la; j=next(j)) {
                if (li[j] == key) {
                    li[j] = -1;
                    break;
                }
            }
        }
    }
    bool nospace = true;
    for (int i=fi; i!=la; i=next(i)) {
        if (li[i] == -1) continue;
        if (nospace) {
            cout << li[i];
            nospace = false;
        } else {
            cout << " " << li[i];
        }
    }
    cout << endl;
    return 0;
}