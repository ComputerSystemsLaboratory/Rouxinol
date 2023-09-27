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
    int n1 = mid - left;
    vector<int> L(n1 + 1);
    for (int i = 0; i < n1; i++) {
        L[i] = a[left + i];
    }
    L[n1] = numeric_limits<int>::max();

    int n2 = right - mid;
    vector<int> R(n2 + 1);
    for (int i = 0; i < n2; i++) {
        R[i] = a[mid + i];
    }
    R[n2] = numeric_limits<int>::max();

    int i = 0;
    int j = 0;
    int count = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            a[k] = L[i++];
        } else {
            a[k] = R[j++];
        }
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

    int count = mergeSort(S, 0, S.size());
    printv(S);
    cout << count << endl;

    return 0;
}