// Selection Sort
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_B&lang=jp
#include <iostream>
using namespace std;
const int ARRAY = 100;
int selectionSort(int a[], int n) {
    int minj;
    int sw = 0;
    int t;
    for(int i = 0; i < n -1; i++){
        minj = i;
        for(int j = i;j < n; j++){
            if(a[j] < a[minj]) minj = j;
        }
        t = a[i]; a[i] = a[minj]; a[minj] = t;
        if(i != minj) sw++;
    }
    return sw;
}
int main() {
    int n;
    int a[ARRAY];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sw = selectionSort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i];
        if(i != n -1) cout << " ";
    }
    cout << endl;
    cout << sw << endl;
    return 0;
}