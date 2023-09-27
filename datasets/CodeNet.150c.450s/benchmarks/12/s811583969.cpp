#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int32_t H;
    cin >> H;

    vector<int32_t> heap(H);
    for (int32_t i = 0; i < H; i++) {
        cin >> heap[i];
    }

    for (int32_t i = 0; i < H; i++) {
        cout << "node " << (i+1) << ": ";
        cout << "key = " << heap[i] << ", ";
        if (ceil(i/2.0)-1 >= 0) cout << "parent key = " << heap[ceil(i/2.0)-1] << ", ";
        if (2*i+1 < H) cout << "left key = " << heap[2*i+1] << ", ";
        if (2*i+2 < H) cout << "right key = " << heap[2*i+2] << ", ";
        cout << endl;
    }

    return 0;
}