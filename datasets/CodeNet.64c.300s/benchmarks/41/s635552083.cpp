#include <iostream>
using namespace std;
int left(int i){return i*2;}
int right(int i){return i*2+1;}
int parent(int i){return i/2;}

void maxHeapify(int* A, int i, int H){
	int l = left(i);
    int r = right(i);
    int m = i;
    if(r <= H && A[m] < A[r]) m = r;
    if(l <= H && A[m] < A[l]) m = l;
    if(m != i){
     int s = A[m];
     A[m] = A[i];
     A[i] = s;
     maxHeapify(A, m, H);
    }
}
void buildMaxHeap(int* A, int H){
 for(int i = H; i >= 1; i--){
     maxHeapify(A, i, H);
 }
}

int main()
{
    int n;
    int A[500001];
    cin >> n;
    for(int i=1; i <= n; i++){
     cin >> A[i];   
    }
    buildMaxHeap(A, n);
    for(int i=1; i <= n; i++){
        cout << " " << A[i];
        }
    cout << endl;
}