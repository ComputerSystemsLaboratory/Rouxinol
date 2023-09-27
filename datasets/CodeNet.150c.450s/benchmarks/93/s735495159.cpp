/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_C
 */
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <utility>

using namespace std;

typedef vector<pair<char, int> > VPCI;

int
partition(VPCI &a, const int p, const int r)
{
    int x = a[r].second;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j].second <= x) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i + 1;
}

void
quicksort(VPCI &a, const int p, const int r)
{
    if (p >= r) { return; }
    int q = partition(a, p, r);
    quicksort(a, p, q - 1);
    quicksort(a, q + 1, r);
}

void
checkstable(const VPCI &original, const VPCI &sorted)
{
    auto sit = sorted.begin();
    for (auto oit = original.begin(); oit != original.end(); oit++, sit++) {
        if (*oit != *sit) {
            cout << "Not stable" << endl;
            return;
        }
    }
    cout << "Stable" << endl;
}

int
main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n; cin.ignore();

    VPCI A(n);
    map<int, vector<char> > O;
    for (int i = 0; i < n; i++) {
        char M;
        int L;
        cin >> M >> L; cin.ignore();

        A[i] = make_pair(M, L);
        if (O.find(L) == O.end()) {
            vector<char> t(1);
            t[0] = M;
            O.emplace(L, t);
        } else {
            O.at(L).push_back(M);
        }
    }
    quicksort(A, 0, n - 1);

    VPCI S(n);
    int c = 0;
    for (auto& itk : O) {
        for (auto& itv : itk.second) {
            S[c++] = make_pair(itv, itk.first);
        }
    }

    checkstable(S, A);
    for (auto it : A) {
        cout << it.first << ' ' << it.second << endl;
    }

    return 0;
}