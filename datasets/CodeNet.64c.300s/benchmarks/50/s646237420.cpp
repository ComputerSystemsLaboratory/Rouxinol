#include <bits/stdc++.h>
using namespace std;

void swap(int a[], int i, int j, int* p_cnt) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
    (*p_cnt)++;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=n-1; j>i; j--) {
            if ( a[j] < a[j-1] ) {
                swap(a, j, j-1, &cnt);
            }
        }
    }
    
    for (int i=0; i<n-1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n-1] << endl;
    cout << cnt << endl;
}