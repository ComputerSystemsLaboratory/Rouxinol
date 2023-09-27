#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int partition(vector<int>& a, int p, int r) {
    int x = a[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; ++j) {
        if (a[j] <= x) {
            i = i + 1;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return i+1;
}

int main()
{
    int n;
    cin >> n;
    int x;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.push_back(x);
    }
    int q = partition(a, 0, n - 1);
    cout << a[0];
    for (int i = 1; i < n; ++i) {
        if (i == q) {
            cout << " [" << a[i] << "]";
        }
        else {
            cout << " " << a[i];
        }
    }
    cout << endl;
}

