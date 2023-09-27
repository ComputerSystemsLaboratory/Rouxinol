#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)

int main(){
    int h; cin >> h;
    
    // heapは1オリジンとする
    vector<int> heap(h+1); 

    //ヒープの読み込み
    for(int i = 1; i < h+1; i++){
        cin >> heap.at(i);
    }

    for(int i = 1; i < h + 1; i++){
        cout << "node " << i << ": key = " << heap.at(i);

        if(i != 1){  // parentの存在判定
            cout << ", parent key = " << heap.at(i / 2);
        }
        if(2*i < h+1){
            cout << ", left key = " << heap.at(2 * i);
        }
        if(2 * i + 1 < h+1){
            cout << ", right key = " << heap.at(2 * i + 1);
        }

        cout << ", " <<  endl;
    }
}
