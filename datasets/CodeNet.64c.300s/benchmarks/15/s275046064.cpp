#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int temp, mini, cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        mini = i + 1;
        //cout << "i: " << i <<endl;
        for (int j = i + 1; j < n; j++) {
            //cout << "j: " << j << endl;
            if (a[mini] > a[j]) {
                mini = j;
            }
            //cout << "mini: " << mini << endl;
        }
        if (a[mini] < a[i]) {
            temp = a[i];
            a[i] = a[mini];
            a[mini] = temp;
            ++cnt;
            /*for (int k = 0; k < n; k++) {
                cout << a[k] << " ";
            }
            cout << endl;*/
        }
    }
    for (int i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[n - 1] << endl;
    cout << cnt << endl;
    delete [] a;
    return 0;
}