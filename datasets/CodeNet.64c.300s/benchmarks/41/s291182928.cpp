#include<iostream>
using namespace std;

int h,A1[500001];

int left(int i){ return i*2;}
int right(int i) { return i*2+1;}

void maxHeapify(int i){
    int largest;
    int l = left(i);
    int r = right(i);
    if(l<=h && A1[l]>A1[i])
        largest = l;
    else
        largest = i;
    if(r<=h && A1[r]>A1[largest])
        largest = r;
    
    if(largest!=i){
        /*int tmp = A1[i];
        A1[i] = A1[largest];
        A1[largest] = tmp;
        maxHeapify(largest);*/
        swap(A1[i],A1[largest]);
        maxHeapify(largest);
    }
}

int main(){
    cin >> h;
    
    for(int i=1; i<=h; i++){
        cin >> A1[i];
    }
    for(int i=h/2; i>=1; i--){
        maxHeapify(i);
    }
    
    for(int i=1; i<=h; i++){
        cout << " " << A1[i];
    }
    cout << endl;
}