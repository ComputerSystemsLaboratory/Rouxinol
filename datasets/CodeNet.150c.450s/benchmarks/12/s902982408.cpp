#include <iostream>
using namespace std;

int H ;
int A[250];

//node 1: key = 7, left key = 8, right key = 1,
void print(int i) {
    int l, r, p;
    l = 2 * i;
    r = 2 * i + 1;
    p = i / 2;
    cout << "node " << i << ": key = " << A[i];
    if (p) {
        cout << ", parent key = " << A[p];
    }
    if (l <= H) {
       cout  << ", left key = "  << A[l];
    }
    if (r <= H) {
        cout << ", right key = " << A[r];
    }
    cout << ", " << endl;
}

int main() {
    cin >> H;
    for (int i = 1; i <= H; ++i) {
        cin >> A[i];
    }

    for (int j = 1; j <= H; ++j) {
        print(j);
    }

    return 0;
}
