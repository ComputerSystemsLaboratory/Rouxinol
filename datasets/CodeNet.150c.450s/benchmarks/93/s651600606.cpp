#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct card {
    char mark;
    int num;
    int order;
};

int partition(vector<card> &A, int p, int r) {
    int x = A.at(r).num;
    int i = p - 1;
    for (int j = p; j < r; ++j) {
        if (A.at(j).num <= x) {
            ++i;
            swap(A.at(i), A.at(j));
        }
    }
    swap(A.at(i + 1), A.at(r));
    return i + 1;
}

void quickSort(vector<card> &A, int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
    return;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<card> A(n);
    for (int i = 0; i < n; ++i) {
        char a;
        int b;
        cin >> a >> b;
        A.at(i) = card{a, b, i};
    }
    quickSort(A, 0, n - 1);
    bool stable = true;
    for (int i = 1; i < n; ++i) {
        if (A.at(i).num == A.at(i - 1).num && A.at(i).order < A.at(i - 1).order) {
            stable = false;
            break;
        }
    }
    cout << ((stable) ? "Stable" : "Not stable") << endl;
    for (int i = 0; i < n; ++i) {
        cout << A.at(i).mark << ' ' << A.at(i).num << endl;
    }

    return 0;
}
