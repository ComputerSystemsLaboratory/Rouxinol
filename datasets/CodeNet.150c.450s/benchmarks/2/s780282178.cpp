#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int partition(vector<int>& vec, int left, int right);

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
            cout << ' ' << "[" << a[i] << "]";
        else
            cout << ' ' << a[i];
    }
    cout << '\n';
}

int partition(vector<int>& vec, int left, int right)
{
    int pivot = vec[right];
    int boundary = left - 1;

    for (int i = left; i < right; ++i) {
        if (vec[i] <= pivot) {
            ++boundary;
            swap(vec[i], vec[boundary]);
        }
    }

    ++boundary;
    swap(vec[boundary], vec[right]);

    return boundary;
}

