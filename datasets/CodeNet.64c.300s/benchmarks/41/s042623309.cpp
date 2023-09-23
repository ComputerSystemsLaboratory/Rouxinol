#include<iostream>
using namespace std;

int H[500005];
int n;

void maxHeapify(int i) {
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest;

    if (l <= n && H[l] > H[i]) largest = l;
    else largest = i;

    if (r <= n && H[r] > H[largest]) largest = r;

    if (largest != i) {
        swap(H[i], H[largest]);
        maxHeapify(largest);
    }
}

void buildMaxHeap() {
    for (int i = n / 2; i > 0; i--) maxHeapify(i);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> H[i];
    buildMaxHeap();
    for (int i = 1; i <= n; i++) cout << " " << H[i];
    cout << "\n"; 
}
