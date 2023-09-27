#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

#define MAX 300

int main(){
    int H, A[MAX];
    cin >> H;

    //1オリジンの配列に格納
    for(int i = 1; i <= H; i++){
        cin >> A[i];
    }

    for(int i = 1; i <= H; i++){
        cout << "node " << i << ": ";
        cout << "key = " << A[i] << ", ";
        if(i-1) cout << "parent key = " << A[i/2] << ", ";
        if(2*i <= H) cout << "left key = " << A[2*i] << ", ";
        if(2*i + 1 <= H) cout << "right key = " << A[2*i + 1] << ", ";
        cout << endl;
    }

    return 0;
}
