#include <stdio.h>
#define MAX 500000

int N;
int H[MAX];
int getLeft(int i) { return 2*i + 1; }
int getRight(int i) { return 2*i + 2; }
int getParent(int i) { return (i-1)/2; }
void swap(int i, int j)
{
    int temp = H[i];
    H[i] = H[j];
    H[j] = temp;
}

void heapify(int i){
    while (i < N) {
        int max_idx = i;
        int l = getLeft(i);
        if (l < N && H[l] > H[max_idx]) max_idx = l;
        int r = getRight(i);
        if (r < N && H[r] > H[max_idx]) max_idx = r;
        if (max_idx != i) {
            swap(i, max_idx);
            i = max_idx;
        } else {
            break;
        }
    }
}

void buildHeap(void)
{
    for(int i = N - 1; i >= 0; --i) heapify(i);
}

int main(void)
{
    //freopen("in.txt", "r", stdin);
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) scanf("%d", &H[i]);
    buildHeap();
    for (int i = 0; i < N; ++i) printf(" %d", H[i]);
    printf("\n");
    
    return 0;
}