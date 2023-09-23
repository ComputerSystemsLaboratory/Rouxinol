#include<iostream>
using namespace std;

void maxHeapify(int H, int A[], int i){
    int l = 2*i;//left
    int r = 2*i + 1;//right
    //左の子、自分、右の子で最大を選ぶ
    int largest;
    if(l <= H && A[l] > A[i]){
        largest = l;
    } else {
        largest = i;
    }
    if(r <= H && A[r] > A[largest]){
        largest = r;
    }

    if(largest != i){//iの子の方が大きい
        int p = A[i];
        A[i] = A[largest];
        A[largest] = p;
        maxHeapify(H, A, largest);
    } 
};

void buildMaxHeap(int H, int A[]){
    for(int i = H/2; i > 0; i--){
        maxHeapify(H, A, i);
    }
};

int main(){
    int H;
    cin >> H;
    int A[H+1];
    for(int i=1; i<=H; i++){
        cin >> A[i];
    }
    buildMaxHeap(H, A);

    for(int j=1; j<=H; j++){
        cout << " " << A[j];
    }
    cout << endl;
    return 0;
}
