/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_B
 */
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int
partition(vector<int> &a, const int p, const int r)
{
    int x = a[r];
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j] <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
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
    int q = partition(A, 0, A.size() - 1);

    for (int i = 0; i < n; i++) {
        cout << (i > 0 ? " " : "") << (i == q ? "[" : "") << A[i] << (i == q ? "]" : "");
    }
    cout << endl;

    return 0;
}