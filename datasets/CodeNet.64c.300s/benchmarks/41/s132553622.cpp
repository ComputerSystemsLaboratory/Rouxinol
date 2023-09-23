#include <iostream>
#define MAX 2000000

using namespace std;

int h, A[MAX+1];

void maxHeapify(int i){
    int left = 2 * i;
    int right = 2 * i + 1;
    int largest;
    if(left <= h && A[left] > A[i]) largest = left;
    else largest = i;
    if(right <= h && A[right] > A[largest]) largest = right;
    if(largest != i){
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        maxHeapify(largest);
    }
}

void buildMaxHeap(){
    for(int i = h/2; i >= 1; i--) maxHeapify(i);
}

int main(){
    int i;
    cin >> h;
    for(i = 1; i <= h; i++) cin >> A[i];
    buildMaxHeap();
    for(i = 1; i <= h; i++) cout << " " << A[i];
    cout << endl;
    return 0;
}
