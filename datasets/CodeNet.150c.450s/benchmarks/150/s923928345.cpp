#include <iostream>
using namespace std;

int main(){
    long n;
    cin >> n;
    long A[10001] = {};
    for (long i = 0; i < n; i++){
        long x;
        cin >> x;
        A[x]++;
    }
    long k = 0;
    for (long i = 0; i <= 10000; i++){
        for (long j = 0; j < A[i]; j++){
            if (k) cout << " ";
            cout << i;
            k++;
        }
    }
    cout << endl;
    return 0;
}