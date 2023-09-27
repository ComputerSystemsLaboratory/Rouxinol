#include <iostream>

using namespace std;

int n;
int a[500005];
int count = 0;

void merge(int l, int mid, int r) {
    int n1 = mid - l;
    int n2 = r - mid;
    int *lf = new int[n1];
    int *rt = new int[n2];
    for (int i = 0; i < n1; i++) {
        lf[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++) {
        rt[i] = a[mid + i];
    }
    int i = 0;
    int j = 0;
    for (int k = l; k < r; k++) {
        count++;
        if ((lf[i] <= rt[j] && i != n1) || (j == n2)) {
            a[k] = lf[i];
            i++;
        } else {
            a[k] = rt[j];
            j++;
        }
    }
    delete(lf);
    delete(rt);
}

void mergeSort(int l, int r) {
    if (l + 1 < r) {
        int mid = (l + r) / 2;
        mergeSort(l, mid);
        mergeSort(mid, r);
        merge(l, mid, r);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    mergeSort(0, n);
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
    cout << count << endl;
    return 0;
}