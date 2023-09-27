#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int H; cin >> H;
    int A[300];
    rep(i, H){
        cin >> A[i+1];
    }
    for (int i = 1; i <= H; i++){
        cout << "node " << i << ": key = " << A[i] << ", ";
        if(i/2 > 0){
            cout << "parent key = " << A[i/2] << ", ";
        }
        if(i*2 <= H){
            cout << "left key = " << A[i*2] << ", ";
        }
        if(i*2 + 1 <=H){
            cout << "right key = " << A[i*2 + 1] << ", ";
        }
        cout << endl;
    }

    return 0;
}
