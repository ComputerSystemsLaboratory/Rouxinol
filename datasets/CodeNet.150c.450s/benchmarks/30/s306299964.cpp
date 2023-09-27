#include <iostream>
using namespace std;

int selectionSort(int *a, int n)
{
    int sw = 0;
    for (int i = 0; i < n - 1; i++) {
        int minj = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[minj]) minj = j;
        swap(a[i], a[minj]);
        if (i != minj)
            sw++;
    }
    return sw;
}

int main()
{
    int a[101], sw, n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    sw = selectionSort(a, n);

    for (int i = 0; i < n; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    cout << endl;
    cout << sw << endl;

    return 0;
}