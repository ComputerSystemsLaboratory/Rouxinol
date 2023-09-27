#include <iostream>
#include <string>
using namespace std;
int main(void){
    long long N, K, A[1 << 18];
    cin >> N >> K;
    for(int i = 0 ; i < N ; i++){
        cin >> A[i];
    }
    
    for(int i = 0 ; i < N - K; i++){
        // cout << A[i] << " " << A[i + K] << endl;
        if(A[i] >= A[i + K]){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}
