#include<iostream>
using namespace std;

int main(){
    int H;
    cin >> H;
    int tree[H+1];
    for (int i = 1; i <= H; i++) {
        int key;
        cin >> key;
        tree[i] = key;
    }
    for (int i = 1; i <= H; i++) {
        cout << "node " << i << ": key = " << tree[i] << ", ";
        if (i / 2 > 0) cout << "parent key = " << tree[i/2] << ", ";
        if (i * 2 <= H) cout << "left key = " << tree[i*2] << ", ";
        if (i * 2 + 1 <= H) cout << "right key = " << tree[i*2+1] << ", ";
        cout << endl;
    }

    return 0;
}