#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++) cin >> A[i];
     
    bool flag = 1;
    int m = 0;
    int cnt = 0;
    while(flag) {
        flag = 0;
        for(int i = N-1; i > m; i--) {
            if(A[i] < A[i-1]) {
                swap(A[i], A[i-1]);
                flag = 1;
                cnt++;
            } 
        }
        m++;
    }

    for(int i = 0; i < N; i++) {
        if(i != N-1) cout << A[i] << ' ';
        else cout << A[i] << endl;
    }
    
    cout << cnt << endl;

    return 0;
}
