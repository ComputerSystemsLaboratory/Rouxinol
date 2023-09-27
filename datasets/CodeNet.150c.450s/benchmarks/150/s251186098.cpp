/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_A
 */
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void
printv(const vector<int> a)
{
    stringstream ss;
    for (auto it = a.cbegin(); it != a.cend(); it++) {
        if (it != a.begin()) {
            ss << ' ';
        }
        ss << *it;
    }
    cout << ss.str() << endl;
}

vector<int>
countingsort(const vector<int> a, const int k)
{
    vector<int> C(k + 1);
    for (auto& it : a) { C[it]++; }

    for (int i = 0; i < k; i++) { C[i + 1] += C[i]; }

    vector<int> B(a.size());
    for (auto it = a.crbegin(); it != a.crend(); it++) {
        B[--C[*it]] = *it;
    }
    return B;
}

int
main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n; cin.ignore();

    vector<int> A(n);
    int k = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i]; cin.ignore();
        if (A[i] > k) { k = A[i]; }
    }

    vector<int> B = countingsort(A, k);
    printv(B);

    return 0;
}