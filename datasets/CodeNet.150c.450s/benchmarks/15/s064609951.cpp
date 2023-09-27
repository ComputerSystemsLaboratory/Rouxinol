#include <iostream>
#include <set>
using namespace std;

int main() {
    int i, n, q, tmp, res = 0;
    set<int> s, t;
    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        s.insert(tmp);
    }

    cin >> q;
    for (i=0; i<q; i++) {
        cin >> tmp;
        if (s.count(tmp) > 0)
            res++;
    }

    cout << res << endl;
    return 0;
}