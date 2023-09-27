#include <iostream>
#include <string>
using namespace std;

int H;

void swap(int *i, int *j){
    int tmp = *i;
    *i = *j;
    *j = tmp;
}
void maxHeapify(int *A, int i){
    int l = 2*i;
    int r = 2*i + 1;
    int largest;
    if (l <= H && A[l] > A[i]){
        largest = l;
    }else{
        largest = i;
    }
    if (r <= H && A[r] > A[largest]){
        largest = r;
    }
    if (largest != i){
        swap(&A[i], &A[largest]);
        maxHeapify(A, largest);
    }else{
        return;
    }
}
void buildingMaxHeap(int *A){
    for (int i = H/2; i >= 1; i--) maxHeapify(A, i);
}
int main(int argc, char* argv[]) {
    scanf("%d", &H);
    int A[H+1];
    for (int i = 1; i < H+1; i++) scanf("%d", &A[i]);

    buildingMaxHeap(A);

    for (int i = 1; i < H+1; i++) printf(" %d", A[i]);
    printf("\n");
    return 0;
}

