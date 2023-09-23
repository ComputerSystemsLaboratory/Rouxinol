#define MAX_H 500000

#include <iostream>
using namespace std;

int H = 0;

int left(int i){return 2 * i;}
int right(int i){return 2 * i + 1;}

void maxHeapify(int A[], int i){
    int l = left(i);
    int r = right(i);
    
    int largest;
    
    if(l <= H && A[l] > A[i])largest = l;
    else largest = i;
    if(r <= H && A[r] > A[largest])largest = r;
    
    if(largest != i){
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(A, largest);
    }
    
}

void buildMaxHeap(int A[]){
    for (int i=H/2; i > 0; i--){
         maxHeapify(A, i);
    }
}

int main(void){
    // Your code here!
    int A[MAX_H + 1];
    int n;
    cin >> n;
    H=n;
    for(int i = 1; i <= n; ++i){
        cin >> A[i];
    }
    
    buildMaxHeap(A);
    
    for(int i = 1; i <= n; ++i){
        cout << " " << A[i];
    }
    
    cout << endl;
    
    return 0;
}

