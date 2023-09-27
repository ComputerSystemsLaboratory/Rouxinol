#include<iostream>
using namespace std;

int H;
int A[500001];

void maxHeapify(int i){
    int left, right, largest;
    left = i * 2;
    right = i * 2 + 1;
    
    if((left <= H) && (A[left] > A[i])) largest = left;
    else largest = i;
    if((right <= H) && (A[right] > A[largest])) largest = right;
    
    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int main(){
    cin >> H;
    
    for(int i = 1; i <= H; i++) cin >> A[i];
    
    for(int i = (H/2); i >= 1; i--) maxHeapify(i);
    
    for(int i = 1; i <= H; i++) cout << " " << A[i];
    cout << endl;
    
    return 0;
}
