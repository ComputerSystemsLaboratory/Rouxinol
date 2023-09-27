#include <bits/stdc++.h>

using namespace std;

int main(){
    int h; cin >> h;
    int h_lst[h+1];
    for(int i=1;i<h+1;i++) cin >> h_lst[i];


    for(int i=1;i<h+1;i++){
        cout << "node " << i << ": key = " << h_lst[i] << ", ";
        if(i>1)
            cout << "parent key = " << h_lst[i/2] << ", ";
        if((2*i) <= h){
            cout << "left key = " << h_lst[2*i] << ", ";
            if((2*i+1) <= h)
                cout << "right key = " << h_lst[2*i+1] << ", ";
        }
        cout << endl;

    }

}
