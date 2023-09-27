#include <bits/stdc++.h>

using namespace std;

int main(){
    int h; cin >> h;
    int h_lst[h+0];
    for(int i=0;i<h+0;i++) cin >> h_lst[i];


    for(int i=0;i<h+0;i++){
        cout << "node " << i+1 << ": key = " << h_lst[i] << ", ";
        if(i>0)
            cout << "parent key = " << h_lst[(i-1)/2] << ", ";
        if((2*i+1) < h){
            cout << "left key = " << h_lst[2*i+1] << ", ";
            if((2*i+2) < h)
                cout << "right key = " << h_lst[2*i+2] << ", ";
        }
        cout << endl;

    }

}
