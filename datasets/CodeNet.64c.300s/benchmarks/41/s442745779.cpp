#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

#define MAX 500100

int H, A[MAX];

int parent(int i){
    return i / 2;
}

int left(int i){
    return 2*i;
}

int right(int i){
    return 2*i + 1;
}

void maxHeapify(int i){
    int l = left(i);
    int r = right(i);
    //左の子，自分，右の子で値が最大のノードを選ぶ
    int largest;
    if(l <= H && A[l] > A[i]){
        largest = l;
    }else{
        largest = i;
    }

    if(r <= H && A[r] > A[largest]){
        largest = r;
    }

    if(largest != i){
        swap(A[i],A[largest]);
        maxHeapify(largest);
    }
}

void buildMaxHeap(){
    for(int i = H/2; i >= 1; i--){
        maxHeapify(i);
    }
}

void print(){
    for(int i = 1; i <= H; i++){
        printf(" %d", A[i]);
    }
    printf("\n");
}

int main(){
    scanf("%d", &H);
    for(int i = 1; i <= H; i++) cin >> A[i];

    buildMaxHeap();

    print();

    return 0;
}
