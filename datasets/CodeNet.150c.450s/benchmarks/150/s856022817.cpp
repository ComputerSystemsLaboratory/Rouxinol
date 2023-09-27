#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define MAX 1e5 + 9

void counting_sort(int a[], int b[], int k, int n);

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    rep(i, n) cin >> a[i], b[i] = 0;
    counting_sort(a, b, MAX, n);
    rep(i, n) {
        if (i == n -1)
            cout << b[i + 1] << endl;
        else
            cout << b[i + 1] << ' ';
    }
}

void counting_sort(int a[], int b[], int k, int n){
    int c[k];
    rep(i, k) c[i] = 0;
    rep(i, n) c[a[i]]++;
    for (int i = 1; i < k; i++) c[i] += c[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        b[c[a[i]]] = a[i];
        c[a[i]]--;
    }
}
