#include <iostream>
using namespace std;
int a[100005];

int main() {
    int n,q = -1,count = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 0; j < n-1; j++) {
        if (a[j] <= a[n-1]) {
            q++;
            int v = a[j];
            a[j] = a[q];
            a[q] = v;
        }
    }
    int v = a[q+1];
    a[q+1] = a[n-1];
    a[n-1] = v;

    for (int k = 0; k < n; k++) {
        cout << (k == q+1?"[":"") << a[k] << (k == q+1?"]":"") << (k == n-1?"":" ");
    }
    cout << endl;
    return 0;
}

