#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); i++)

int parent(int i){
    return i/2;
}

int left(int i){
    return i*2;
}

int right(int i){
    return i*2 + 1;
}

void maxHeapify(int A[], int i, int n){
    int l = left(i);
    int r = right(i);
    // 左の子、自分、右の子で値が最大のノードを選ぶ
    int largest;
    if(l <= n && A[l] > A[i])
        largest = l;
    else 
        largest = i;
    
    if(r <= n && A[r] > A[largest])
        largest = r;

    if(largest != i){  // i の子の方が値が大きい場合
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(A, largest, n); // 再帰的に呼び出し
    }
}

void buildMaxHeap(int A[], int n){
    for(int i=n/2; i>=1; i--){
        maxHeapify(A, i, n);
    }
}

int main() {
    
    int n;
    cin >> n;
    int a[500001];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    buildMaxHeap(a, n);

    for(int i=1; i<=n; i++){
        cout << " " << a[i];
    }
    cout << endl;

    return 0;
}
