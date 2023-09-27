#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int partition(vector<int>& a, int p, int r);

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int pivot = partition(a, 0, n - 1);
    cout << a[0];
    for (int i = 1; i < n; ++i) {
        if (i == pivot)
            cout << " [" << a[i] << "]";
        else
            cout << ' ' << a[i];
    }
    cout << '\n';
}

int partition(vector<int>& a, int p, int r)
{
    int pivot = a[r];
    int div = p - 1;

    for (int i = p; i < r; ++i) {
        if (a[i] <= pivot) {
            ++div;
            swap(a[i], a[div]);
        }
    }
    ++div;
    swap(a[div], a[r]);

    return div;
}

