#include <iostream>
using ll = long long;
using namespace std;


int main() {
    int n;
    int temp, count = 0;
    cin >> n;
    int L[n];
    for (int i = 0; i < n; ++i) {
        cin >> L[i];
    }
    for (int j = 0; j < n-1; j++) {
        int minj = j;
        for (int k = j; k < n; k++) {
            if (L[k] < L[minj]) minj = k;
        }
        if(j != minj){
            temp = L[j];
            L[j] = L[minj];
            L[minj] = temp;
            count++;
        }
    }
    for (int k = 0; k < n; ++k) {
        if (k) cout << " ";
        cout << L[k];
    }
    cout << "\n";
    cout << count << "\n";
    return 0;
}
