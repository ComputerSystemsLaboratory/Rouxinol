#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int A[1000000];
int H;

void maxHeapify(int i){
    int l = i*2;
    int r = i*2 + 1;
    int largest;
    if(l <= H && A[l] > A[i]){
        largest = l;
    } else {
        largest = i;
    }
    if(r <= H && A[r] > A[largest]){
        largest = r;
    }

    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
    return;
}

void buildMaxHeap(){
    for (int i = H/2; i >= 1; i--){
        maxHeapify(i);
    }
}


int main() {
    cin >> H;
    rep(i, H){
        cin >> A[i+1];
    }
    buildMaxHeap();
    rep(i, H){
        cout << " " << A[i+1];
    }
    cout << endl;

    return 0;
}
