#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int A[10000000];
int H = 0;
int INF = 1001001001;

void heapIncreaseKey(int i, int k){
    A[i] = k;
    while(i > 1 && A[i/2] < A[i]){
        swap(A[i], A[i/2]);
        i /= 2;
    }
}

void insertx(int k){
    H++;
    A[H] = -INF;
    heapIncreaseKey(H, k);
}

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

int heapExtractMax(){
    int maX = A[1];
    A[1] = A[H];
    H--;
    maxHeapify(1);
    return maX;
}

int main() {
    while(1){
        string S; cin >> S;
        if(S == "insert"){
            int n; cin >> n;
            insertx(n);
        } else if(S == "extract"){
            int n = heapExtractMax();
            cout << n << endl;
        } else {
            return 0;
        }
    }

    return 0;
}
