#include<iostream>
using namespace std;
#define MAX 2000000

int n, heap[MAX+1];

void maxHeapify(int i){
    int l, r, largest;
    l = i*2;
    r = i*2+1;
    
    if(l<=n && heap[l]>heap[i]) largest = l;
    else largest = i;
    if(r<=n && heap[r]>heap[largest]) largest = r;

    if(largest!=i){
        swap(heap[i], heap[largest]);
        maxHeapify(largest);
    }
}


int main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> heap[i];
    for(int i=n/2;i>0;i--) maxHeapify(i);
    for(int i=1;i<=n;i++) cout << " " << heap[i];
    cout << endl;

    return 0;
}

