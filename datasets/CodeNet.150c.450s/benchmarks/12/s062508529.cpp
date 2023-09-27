#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int parent(int index) {
    if (index == 1) {
        return 0;
    }

    return index / 2;
}

int get_left(int index) {
    return 2 * index;
}

int get_right(int index) {
    return (2 * index) + 1;
}

int main() {
    int N;
    cin >> N;
    vector<int>vec(N);
    for (int i=0; i < N; i++) {
        cin >> vec.at(i);
    }

    for (int i=0; i < N; i++) {
        int index = i + 1;
        cout << "node " << index << ": key = " << vec[i] << ", ";
        int parent_ = parent(index);
        if (parent_ > 0) {
            cout << "parent key = " << vec[parent_-1] << ", ";
        }

        int left_key = get_left(index);
        if (N >= left_key) {
            cout << "left key = " << vec[left_key-1] << ", ";
        }

        int right_key = get_right(index);
        if (N >= right_key) {
            cout << "right key = " << vec[right_key-1] << ", ";
        }
        cout << endl;
    }

    return 0;
}
