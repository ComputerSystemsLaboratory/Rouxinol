#include <iostream>
using namespace std;

#define MAX 100000

int Parent(int i) {
    return i / 2;
}
int Left(int i) {
    return 2 * i;
}
int Right(int i) {
    return 2*i + 1;
}

int main() {
    int h, A[MAX+1];
    cin >> h;
    for ( int i = 1; i <= h; i++ ) cin >> A[i];
    
    for ( int i = 1; i <= h; i++ ) {
        cout << "node " << i << ": key = " << A[i] << ", ";
        if ( Parent(i) >= 1 ) {
            cout << "parent key = " << A[Parent(i)] << ", ";
        }
        if ( Left(i) <= h ) {
            cout << "left key = " << A[Left(i)] << ", ";
        }
        if ( Right(i) <= h ) {
            cout << "right key = " << A[Right(i)] << ", ";
        }
        cout << endl;
    }
    
    return 0;
}