#include <iostream>
using namespace std;

int H;
int largest;

int parent(int i){
    return i/2;
}

int left(int i){
    return i*2;
}

int right(int i){
    return i*2+1;
}

void maxHeap(int A[],int i){
    int l = left(i);
    int r= right(i);
    
    if(l<=H && A[l]>A[i])
        largest = l;
    else
        largest = i;
    
    if(r<=H && A[r] > A[largest])
        largest = r;
    
    if(largest!=i){
        int temp = A[i];
        A[i] = A[largest];
        A[largest] = temp;
        maxHeap(A, largest);
    }
    
}

int main(int argc, const char * argv[]) {
    cin >> H;
    int A[H];
    for(int i=1;i<=H;i++){
       cin >> A[i];
    }
    
    for(int i=H/2;i>0;i--)
        maxHeap(A, i);
    
    for(int i=1;i<=H;i++){
        cout << " " << A[i] ;
    }
    cout << endl;
    
    return 0;
}