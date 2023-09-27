#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    bool a[31]={1};
    for(int i=1;i<30;i++){
        a[i]=0;
    }
    int q;
    for(int i=0;i<28;i++){
        cin >> q;
        a[q]=1;
    }
    for(int i=0;i<31;i++){
        if(a[i]==0){
            cout << i << endl;
        }
    }

    return 0;
}
