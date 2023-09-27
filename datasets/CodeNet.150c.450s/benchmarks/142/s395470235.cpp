#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = K; i < N; i++) {
        if (A[i] > A[i - K]) {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
