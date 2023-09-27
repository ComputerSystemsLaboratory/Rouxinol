/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A
 */
#include <iostream>
#include <vector>

using namespace std;

bool
chkcombi(const vector<int> &a, const int index, const int sum, const int val)
{
    bool ret = false;
    for (int i = index; ret == false && i < a.size(); i++) {
        int s = sum + a.at(i);
        if (s == val) {
            ret = true;
            break;
        } else if (s > val) {
            continue;
        }
        ret = chkcombi(a, i + 1, s, val);
    }
    return ret;
}

int
main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n; cin.ignore();

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i]; cin.ignore();
    }

    int q;
    cin >> q; cin.ignore();
    for (int i = 0; i < q; i++) {
        int m;
        cin >> m; cin.ignore();
        cout << (chkcombi(A, 0, 0, m) ? "yes" : "no") << endl;
    }

    return 0;
}