#include <iostream>
using namespace std;

void maxHeapify(int A[],int i,int n){
    int largest,temp;
    int left_child = 2*i;
    int right_child = 2*i + 1;
    if(left_child <= n && A[left_child] > A[i]) largest = left_child;
    else largest = i;
    if(right_child <= n && A[largest] < A[right_child]) largest = right_child;

    if(largest != i){
        temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        maxHeapify(A,largest,n);
    }
}

int main(){
    int n;
    cin >> n;
    int A[n+1];
    for(int i = 1; i <= n; i++) cin >> A[i];
    
    for(int i = n/2; 0 < i; i--){
        maxHeapify(A,i,n);
    }

    for(int i = 1; i <= n; i++){
        cout << " " << A[i];
    }
    cout << endl;
}
