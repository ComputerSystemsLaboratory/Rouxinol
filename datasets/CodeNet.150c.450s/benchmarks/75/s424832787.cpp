#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> A;
int H;

void maxHeapify(int idx)
{
    int left=2*idx, right=2*idx+1;
    int largest;
    if(left<=H && A[left]>A[idx]){
        largest=left;
    } else{
        largest=idx;
    }
    if(right<=H && A[right]>A[largest]){
        largest=right;
    }
    if(largest!=idx){
        swap(A[largest], A[idx]);
        maxHeapify(largest);
    }
}

void buildMaxHeap()
{
    for(int i=H/2; i; i--){
        maxHeapify(i);
    }
}

int main()
{
    scanf("%d", &H);
    A=vector<int>(H+1);
    for(int i=0; i<H; i++){
        scanf("%d", &A[i+1]);
    }
    buildMaxHeap();
    for(int i=0; i<H; i++){
        printf(" %d", A[i+1]);
    }
    printf("\n");
    return 0;
}