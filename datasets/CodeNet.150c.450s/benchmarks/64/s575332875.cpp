#include <iostream>
#include <vector>
using namespace std;

bool search(const vector<int>& A, int n, int m) {
    if (m == 0) return true;
    if (n >= A.size()) return false;

    int ret = search(A, n+1, m) || search(A, n+1, m-A[n]);
    return ret;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> ary(n);
    for (int i = 0; i < n; i++) {
        cin >> ary[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m;
        if (search(ary, 0, m)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}