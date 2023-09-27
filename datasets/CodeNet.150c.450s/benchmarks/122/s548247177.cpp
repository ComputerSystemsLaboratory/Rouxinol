#include <bits/stdc++.h>
using namespace std;

#define MAX 2000000
#define INFTY (1<<30)

int H;

int left(int i) {
    return i * 2;
}

int right(int i) {
    return i * 2 + 1;
}

int parent(int i) {
    return i / 2;
}


void maxHeapify(vector<int> &A, int i) {
    int l = left(i);
    int r = right(i);

    int largest;

    if (l <= H && A.at(l) > A.at(i)) {
        largest = l;
    }
    else {
        largest = i;
    }

    if (r <= H && A.at(r) > A.at(largest)) {
        largest = r;
    }

    if (largest != i) {
        swap(A.at(i), A.at(largest));
        maxHeapify(A, largest);
    }
}

int extract(vector<int> &A) {
    int maxv;
    if ( H < 1 ) {
        return -INFTY;
    }
    maxv = A.at(1);
    A.at(1) = A.at(H);
    H--;
    maxHeapify(A, 1);
    return maxv;
}

void increaseKey(int i, int key, vector<int> &A) {
    if ( key < A.at(i)) {
        return;
    }

    A.at(i) = key;
    
    while ( i > 1 && A.at(parent(i)) < A.at(i)) { // iの親より大きい場合、親とiのkeyを入れ替える
        swap(A.at(i), A.at(i / 2));
        i = i / 2;
    }
}

void insert(int key, vector<int> &A)
{
    H++;
    A.at(H) = -INFTY;
    increaseKey(H, key, A);
}

int main() {
    string cmd;
    int key;
    vector<int> A(MAX+1);

    while (true)
    {
        cin >> cmd;

        if (cmd == "insert") {
            cin >> key;
            insert(key, A);
        }

        if (cmd == "extract") {
            cout << extract(A) << endl;
        }
        if (cmd == "end") {
            break;
        }
    }
}
