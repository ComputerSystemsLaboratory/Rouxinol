#include <bits/stdc++.h>
#define rep(i,a) for(i=1;i<=a;i++)
using namespace std;

void maxHeapify(int *A, int i, int H){
    int l = 2*i;
    int r = 2*i+1;
    int largest;
    l<=H && A[l]>A[i]?largest = l:largest = i;
    if(r<=H && A[r]>A[largest])
        largest = r;
    if(largest != i){
        swap(A[i],A[largest]);
        maxHeapify(A,largest,H);
    }
}

int main(void) {
    int H,i;
    cin >> H;
    int A[H];
    rep(i,H){
    cin >> A[i];
    }
    for(i=H/2;i>0;i--){
        maxHeapify(A,i,H);
    }
    rep(i,H)
        cout << " " << A[i];
    cout << endl;
    return 0;
}