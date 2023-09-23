#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) cin >> A[i];

    bool flag = 1;
    int cnt = 0;

    while(flag) {
        flag = 0;
        for(int j = n-1; j > 0; j--) {
            if(A[j] < A[j-1]) {
                int tmp = A[j];
                A[j] = A[j-1];
                A[j-1] = tmp;
                flag = 1;
                cnt++;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(i != n-1) cout << A[i] << ' ';
        else cout << A[i] << endl;
    }
    cout << cnt << endl;


    return 0;
}
