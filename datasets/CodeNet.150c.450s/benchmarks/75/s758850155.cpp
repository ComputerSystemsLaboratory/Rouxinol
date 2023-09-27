#include <bits/stdc++.h>
using namespace std;

int h;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

void maxheapify(vector<int> &T, int i) {
    int l = left(i);
    int r = right(i);
    int MAX;
    if (l <= h && T.at(l) > T.at(i)) {
        MAX = l;
    } else {
        MAX = i;
    }
    if (r <= h && T.at(r) > T.at(MAX)) {
        MAX = r;
    }

    if (MAX != i) {
        swap(T.at(i), T.at(MAX));
        maxheapify(T, MAX);
    }
}

void buildMaxHeap(vector<int> &T) {
    for (int i = h / 2; i >= 1; i--) {
        maxheapify(T, i);
    }
}

int main() {
    cin >> h;
    vector<int> T(h + 1);
    for (int i = 1; i <= h; i++) {
        cin >> T.at(i);
    }

    buildMaxHeap(T);

    for (int i = 1; i <= h; i++) {
        cout << " " << T.at(i);
        
    }
    cout << endl;

    return 0;
}
