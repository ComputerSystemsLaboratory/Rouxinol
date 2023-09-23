#include <iostream>
using ll = long long;
using namespace std;


int main() {
    int n, temp, s = 0;
    cin >> n;
    int L[n];
    for (int l = 0; l < n; ++l) {
        cin >> L[l];
    }
    bool flag = 1;
    for (int i = 0; flag; i++) {
        flag = 0;
        for (int j = n-1 ; j >= i + 1; j--) {
            if ( L[j] < L[j-1]){
                temp = L[j];
                L[j] = L[j-1];
                L[j-1] = temp;
                flag = 1;
                s++;
            }
        }
    }
    for (int k = 0; k < n; ++k) {
        if (k) cout << " ";
        cout << L[k];
    }
    cout << "\n";
    cout << s << "\n";
    return 0;
}
