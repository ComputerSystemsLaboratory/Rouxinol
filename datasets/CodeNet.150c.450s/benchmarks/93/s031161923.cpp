#include <iostream>
#include <vector>
#include <utility>
#include <limits>
using namespace std;

int merge(vector<pair<char, long>>& A, long left, long mid, long right)
{
    long n1 = mid - left;
    long n2 = right - mid;
    vector<pair<char, long>> L;
    vector<pair<char, long>> R;
    for (long i = 0; i < n1; ++i) {
        L.push_back(A[left + i]);
    }
    for (long i = 0; i < n2; ++i) {
        R.push_back(A[mid + i]);
    }
    L.push_back(make_pair('!', numeric_limits<long>::max())); // sentinel
    R.push_back(make_pair('!', numeric_limits<long>::max())); // sentinel
    long i = 0;
    long j = 0;
    for (long k = left; k < right; ++k) {
        if (L[i].second <= R[j].second) {
            A[k] = L[i];
            ++i;
        } else {
            A[k] = R[j];
            ++j;
        }
    }
    return right - left;
}

// Aの区間 [left, right) をソートする
int mergeSort(vector<pair<char, long>>& A, long left, long right)
{
    if (right - left <= 1) {
        // right - left <= 0 にすると無限再帰になるため、
        // 空になる前(1要素)を限界とすること。
        return 0;
    }
    long mid = (left + right) / 2;
    int cmp1 = mergeSort(A, left, mid);
    int cmp2 = mergeSort(A, mid, right);
    int cmp3 = merge(A, left, mid, right);
    return cmp1 + cmp2 + cmp3;
}

// Aの範囲[p, r]をpartition分割
long partition(vector<pair<char, long>>& A, long p, long r)
{
    long i = p - 1;
    for (long j = p; j <= r - 1; ++j) {
        if (A[j].second <= A[r].second) {
            swap(A[i + 1], A[j]);
            ++i;
        }
    }
    swap(A[i + 1], A[r]);
    return i + 1;
}

void quicksort(vector<pair<char, long>>& A, long p, long r)
{
    if (p >= r) {
        return;
    }
    long q = partition(A, p, r);
    quicksort(A, p, q - 1);
    quicksort(A, q + 1, r);
}

int main()
{
    long n;
    cin >> n;
    vector<pair<char, long>> A;
    vector<pair<char, long>> B;
    for (long i = 0; i < n; ++i) {
        char suit;
        int number;
        cin >> suit >> number;
        A.push_back(make_pair(suit, number));
        B.push_back(make_pair(suit, number));
    }
    quicksort(A, 0, n - 1);
    mergeSort(B, 0, n);
    bool stable = true;
    for (long i = 0; i < n; ++i) {
        if (A[i].first != B[i].first) {
            stable = false;
        }
    }
    if (stable) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    for (auto a : A) {
        cout << a.first << " " << a.second << endl;
    }
}
