#include <iostream>
//#define int long long
using namespace std;
int N, A[35];
int solve(){
    A[0] = 1;
    A[1] = 1;
    A[2] = 2;
    A[3] = 4;
    for(int i=4; i<=N; i++){
        A[i] = A[i-3] + A[i-2] + A[i-1];
    }
    return A[N];
}

signed main(){
    N = 30;
    solve();
    while(cin >> N && N > 0){
        cout << (A[N]-1)/3650+1 << endl;
    }
}
