#include <iostream>

using namespace std;

const int MAX = 100000;
int seq[MAX];

int partition(int a[], int l, int r) {
    int x = a[r];
    int i = l - 1;
    for (int j = l; j < r; ++j) {
        if (a[j] <= x) {
            ++i;
            swap(a[j], a[i]);
        }
    }
    swap(a[i+1], a[r]);
    return i + 1;
}

int
main(int argc, const char *argv[])
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> seq[i];
    int q = partition(seq, 0, n-1);

    for (int i = 0; i < n; ++i) {
        if (i) cout << " ";
        if (i == q) cout << "[";
        cout << seq[i];
        if (i == q) cout << "]";
    }
    cout << endl;

    return 0;
}