#include<iostream>
using namespace std;
#define max 500000

int H, A[max + 1];

int left(int i) {
    return 2 * i;
}

int right(int i) {
    return 2 * i + 1;
}

void maxheapify(int i) {
    int l, r, largest;
    l = left(i);    
    r = right(i);
    if (l <= H && A[i] < A[l]) {
        largest = l;
    } else {
        largest = i;
    } 
    if ( r <= H && A[largest] < A[r]) {
        largest = r;
    }

    if (largest != i) {
        swap(A[i], A[largest]);
        maxheapify(largest);
    }
}

void buildmaxheap() {
    for (int i = H / 2; i > 0; i--) {
        maxheapify(i);
    }
}
int main() {
    cin >> H;
    for (int i = 1; i <= H; i++) {
        cin >> A[i];
    }
    
    buildmaxheap();
    for (int i = 1; i <= H; i++) {
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}

