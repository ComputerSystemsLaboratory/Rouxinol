#include <iostream>
using namespace std;

int A[100000];

int partition(int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; ++j) {
        if (A[j] <= x) {
            i++;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    int index = partition(0, n - 1);

    for (int i = 0; i < n - 1; ++i) {
        if (i == index) {
            cout << "[" << A[i] << "] ";
        } else {
            cout << A[i] << " ";
        }
    }
    if (n-1 != index) {
        cout << A[n-1] << endl;
    } else {
        cout << "[" << A[n-1] << "]" << endl;
    }
    return 0;
}