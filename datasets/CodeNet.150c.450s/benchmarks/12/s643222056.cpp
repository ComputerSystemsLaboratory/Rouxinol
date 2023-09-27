#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h;
    cin >> h;

    vector<int> heap(h + 1);
    for (int i = 1; i <= h; ++i)
        cin >> heap[i];

    for (int i = 1; i <= h; ++i) {
        cout << "node " << i << ": key = " << heap[i];
        if (i > 1)
            cout << ", parent key = " << heap[i / 2];

        int left_idx = i * 2;
        int right_idx = i * 2 + 1;
        if (left_idx <= h)
            cout << ", left key = " << heap[left_idx];
        if (right_idx <= h)
            cout << ", right key = " << heap[right_idx];
        cout << ", \n";
    }
}

