#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int len[3];
    int n,A,B,C;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> len[0] >> len[1] >> len[2];
        sort(len, len + 3);
        A = len[0] * len[0];
        B = len[1] * len[1];
        C = len[2] * len[2];
        if(A + B == C){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
