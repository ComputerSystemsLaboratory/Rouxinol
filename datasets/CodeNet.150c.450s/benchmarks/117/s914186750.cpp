/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A
 */
#include <iostream>
#include <sstream>
#include <vector>
#include <limits>

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

int
merge(vector<int> &a, const int left, const int mid, const int right)
{
    vector<int> L(a.begin() + left, a.begin() + mid);
    L.push_back(numeric_limits<int>::max());

    vector<int> R(a.begin() + mid, a.begin() + right);
    R.push_back(numeric_limits<int>::max());

    int i = 0;
    int j = 0;
    int count = 0;
    for (int k = left; k < right; k++) {
        a[k] = L[i] <= R[j] ? L[i++] : R[j++];
        count++;
    }

    return count;
}

int
mergeSort(vector<int> &a, const int left, const int right)
{
    if (left + 1 >= right) return 0;

    int count = 0;
    int mid = (left + right) / 2;
    count += mergeSort(a, left, mid);
    count += mergeSort(a, mid, right);
    count += merge(a, left, mid, right);
    return count;
}

int
main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n; cin.ignore();

    vector<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i]; cin.ignore();
    }

    int count = mergeSort(S, 0, n);
    printv(S);
    cout << count << endl;

    return 0;
}