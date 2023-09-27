/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_D
 */
#include <iostream>
#include <vector>

using namespace std;

pair<long, vector<int> >
mergeandcount(const vector<int> A, const vector<int> B)
{
    auto itA = A.cbegin();
    auto itB = B.cbegin();
    long count = 0;
    vector<int> C;
    while (itA != A.end() && itB != B.end()) {
        if (*itB < *itA) {
            C.push_back(*itB);
            count += distance(itA, A.end());
            advance(itB, 1);
        } else {
            C.push_back(*itA);
            advance(itA, 1);
        }
    }
    if (itA != A.end()) {
        C.insert(C.end(), itA, A.end());
    } else {
        C.insert(C.end(), itB, B.end());
    }
    return make_pair(count, C);
}

pair<long, vector<int> >
sortandcount(const vector<int> L)
{
    if (L.size() == 1) { return make_pair(0, L); }

    int m = L.size() / 2;
    vector<int> A(L.cbegin(), L.cbegin() + m);
    vector<int> B(L.cbegin() + m, L.cend());
    pair<long, vector<int> > rA = sortandcount(A);
    pair<long, vector<int> > rB = sortandcount(B);
    pair<long, vector<int> > rC = mergeandcount(rA.second, rB.second);
    return make_pair(rA.first + rB.first + rC.first, rC.second);
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

    cout << sortandcount(A).first << endl;

    return 0;
}