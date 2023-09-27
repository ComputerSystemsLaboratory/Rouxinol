#include <iostream>
using namespace std;

#define MAX 1000000

int H, A[MAX+1];

void MaxHeapify(int i);

int main() {
    cin >> H;
    
    for ( int i = 1; i <= H; i++ ) cin >> A[i];
    
    for ( int i = H/2; i >= 1; i-- ) MaxHeapify(i);
    
    for ( int i = 1; i <= H; i++ ) {
        cout << " " << A[i];
    }
    cout << endl;
    
    return 0;
}

void MaxHeapify(int i) {
    int L = 2 * i;
    int R = 2 * i + 1;
    
    int largest;
    // ?????????????????¨?????????????,??????????????¶??£?¶???¢??¬??????????????¶??¶?????????????£
    if ( L <= H && A[L] > A[i] ) {
        largest = L;
    } else {
        largest = i;
    }
    if ( R <= H && A[R] > A[largest] ) largest = R;
    
    if ( i != largest ) {
        swap(A[i], A[largest]);
        MaxHeapify(largest);
    }
}

/*
10
4 1 3 2 16 9 10 14 8 7
 */