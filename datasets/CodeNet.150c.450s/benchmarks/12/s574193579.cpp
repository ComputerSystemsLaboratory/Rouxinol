/**
 * Heaps - Complete Binary Tree
 */

#include <iostream>

using namespace std;

int main() {

    int H, A[502];

    cin >> H;

    for (int i = 1; i <= H; i++) {
        cin >> A[i];
    }

    for (int i = 1; i <= H; i++) {
        int parent, left, right;
        parent = i / 2;
        left = i * 2;
        right = i * 2 + 1;
        printf("node %d: key = %d, ", i, A[i]);
        if (parent) printf("parent key = %d, ", A[parent]);
        if (left <= H) printf("left key = %d, ", A[left]);
        if (right <= H) printf("right key = %d, ", A[right]);
        cout << endl;
    }
}
