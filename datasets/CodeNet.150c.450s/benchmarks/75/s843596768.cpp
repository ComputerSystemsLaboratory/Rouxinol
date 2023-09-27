#include <iostream>
using namespace std;int n;
void maxHeapify(int *A,int i){
    int l=2*i;
    int r=2*i+1;
    int largest;
    if(l<=n&&A[l]>A[i]){
        largest=l;
    }
    else {
        largest=i;
    }
    if(r<=n && A[r] > A[largest]){
        largest = r;
    }
    if (largest!=i){
        int c=A[i];
        A[i]=A[largest];
        A[largest]=c;
        maxHeapify(A, largest);
    }
}
void buildMaxHeap(int *A){
    for(int i=n/2;i>=1;i--){
        maxHeapify(A, i);
    }
}
int main(){
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    buildMaxHeap(a);
    for(int i=1;i<=n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    return 0;
}
