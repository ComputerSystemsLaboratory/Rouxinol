#include <bits/stdc++.h>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;

int main(void) {
    int i,H,buf;
    vector<int> A;

    cin >> H;
    rep(i,H){
        cin >> buf;
        A.push_back(buf);
    }
    rep(i,H){
        cout << "node " << i+1 << ": key = " << A[i] << ", ";
        if(i > 0) cout << "parent key = " << A[(i+1)/2-1] << ", ";
        if((i+1)*2-1 < H) cout << "left key = " << A[(i+1)*2-1] << ", ";
        if(2*(i+1) < H) cout << "right key = " << A[2*(i+1)] << ", ";
        cout << endl;
    }
    return 0;
}