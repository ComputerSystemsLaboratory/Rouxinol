#include <iostream>

using namespace std;

int partition(int a[], int p, int r)
{
        int x = a[r],
                i = p - 1;
        int temp;

        for (int j = p; j < r; j++) {
                if (a[j] <= x) {
                        i++;
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                }
        }
        temp = a[i + 1];
        a[i + 1] = a[r];
        a[r] = temp;

        return i + 1;
}

int main()
{
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
                cin >> a[i];
        }

        int pivot = partition(a, 0, n - 1);
        for (int i = 0; i < n - 1; i++) {
                if (i == pivot) {
                        cout << "[" << a[i] << "]";
                } else {
                        cout << a[i];
                }
                cout << " ";
        }
        cout << a[n - 1] << endl;

        return 0;
}