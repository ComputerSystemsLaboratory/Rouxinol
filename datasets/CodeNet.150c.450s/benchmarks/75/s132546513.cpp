#include <cstdio>
#include <algorithm>
#include <array>
using namespace std;

int H, *A;  // H = heap size

void maxHeapify(int i) {
    int largest;
    int left = 2 * (i + 1) - 1;
    int right = 2 * (i + 1);
    if (left < H && A[left] > A[i]) {
        largest = left;
    } else {
        largest = i;
    }
    if (right < H && A[right] > A[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int main() {
    scanf("%d", &H);

    A = new int[H];
    for (int i = 0; i < H; i++) {
        scanf("%d", &A[i]);
    }
    
    for (int i = H / 2 - 1; i >= 0; i--) {
        maxHeapify(i);
    }

    for (int i = 0; i < H; i++) {
        printf(" %d", A[i]);
    }
    printf("\n");
    
    return 0;
}
