#include<iostream>
using namespace std;
#include<stdio.h>

inline int left(int i, int H){ return (2 * i <= H ? 2 * i : -1); }
inline int right(int i, int H){ return (2 * i + 1 <= H ? 2 * i + 1 : -1); }

void max_heapify(int* A, int i, int H)
{
    int l = left(i, H), r = right(i, H);
    if(l < 0 && r < 0) return;
    int maxid = i, x;
    if(l > 0) maxid = (A[l] > A[maxid] ? l : maxid);
    if(r > 0) maxid = (A[r] > A[maxid] ? r : maxid);
    if(maxid == i) return;
    x = A[maxid]; A[maxid] = A[i]; A[i] = x;
    max_heapify(A, maxid, H);
}

void BuildMaxHeap(int* A, int H)
{
    for(int i = H / 2; i > 0; i--) max_heapify(A, i, H);
    return;
}

int main()
{
    int *A;
    int i, H;
    scanf("%d", &H);
    A = new int[H + 1];
    for(i = 1; i <= H; i++) scanf("%d", &A[i]);
    BuildMaxHeap(A, H);
    for(i = 1; i <= H; i++) printf(" %d", A[i]);
    printf("\n");
    delete [] A;
    return 0;
}