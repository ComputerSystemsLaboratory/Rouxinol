#include<iostream>
using namespace std;
#include<stdio.h>

int *A;
int H;

void max_heapify(int i)
{
    int l = 2 * i, r = 2 * i + 1;
    if(l > H && r > H) return;
    int maxid = i, x;
    if(l <= H) maxid = (A[l] > A[maxid] ? l : maxid);
    if(r <= H) maxid = (A[r] > A[maxid] ? r : maxid);
    if(maxid == i) return;
    x = A[maxid]; A[maxid] = A[i]; A[i] = x;
    max_heapify(maxid);
}

void BuildMaxHeap()
{
    for(int i = H / 2; i > 0; i--) max_heapify(i);
    return;
}

int main()
{
    scanf("%d", &H);
    A = new int[H + 1];
    for(int i = 1; i <= H; i++) scanf("%d", &A[i]);
    BuildMaxHeap();
    for(int i = 1; i <= H; i++) printf(" %d", A[i]);
    printf("\n");
    delete [] A;
    return 0;
}