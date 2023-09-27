#include <iostream>
using namespace std;

int A[2000000];
int H;

int l(int i) {
    return i * 2;
}

int r(int i) {
    return i * 2 + 1;
}

int p(int i) {
    return i/2;
}
void maxify(int i) {
    int mi = i;
    if (l(i) <= H && A[l(i)] > A[i]) {
        mi = l(i);
    }
    if (r(i) <= H && A[r(i)] > A[mi]) {
        mi = r(i);
    }
    if (mi != i) {
        swap(A[i], A[mi]);
        maxify(mi);
    }
}

void insert(int k) {
    H++;
    A[H] = k;
    int i = H;
    while (i >= 1) {
        maxify(i);
        i = p(i);
    }
}

int extract() {
    int ret = A[1];
    A[1] = A[H];
    H--;
    maxify(1);
    return ret;

}

int main() {
    string cmd;
    int k;
    while (true) {
        cin >> cmd;
        if(cmd == "insert") {
            cin >> k;
            insert(k);
        } else if (cmd == "extract") {
            cout << extract() << endl;
        } else if (cmd == "end") {
            break;
        }
    }


    return 0;
}

