#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 100000

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return 2 * i;
}
int right(int i) {
    return 2 * i + 1;
}

int main(void) {
    int H;
    int A[MAX + 1] = {};
    
    cin >> H;
    for(int i = 1; i <= H; ++i) cin >> A[i];
    
    for(int i = 1; i <= H; ++i) {
        printf("node %d: key = %d, ", i, A[i]);
        if(parent(i) >= 1) printf("parent key = %d, ", A[parent(i)]);
        if(left(i) <= H) printf("left key = %d, ", A[left(i)]);
        if(right(i) <= H) printf("right key = %d, ", A[right(i)]);
        cout << endl;
    }
    
    return 0;
}
