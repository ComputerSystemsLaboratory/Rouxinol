#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define MAX 2000000
#define INFTY (1<<30)

int H, A[MAX+1];

int left(int i) {
    return (i*2);
}

int right(int i) {
    return (i*2+1);
}

void maxHeapify(int i) {
    int l = left(i);
    int r = right(i);
    int largest;

    if(l<=H && A[l]>A[i]) {
        largest = l;
    }
    else {
        largest = i;
    }
    //printf("largest = %d\n", largest);
    if(r<=H && A[r]>A[largest]) {
        largest = r;
    }

    if(largest!=i) {
        //printf("swaping!\n");
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int extract() {
    int maxv;
    if(H<1) {
        return -INFTY;
    }
    maxv = A[1];
    A[1] = A[H--];
    maxHeapify(1);
    return maxv;
}

void increaseKey(int i, int key) {
    if(key<A[i]) {
        return;
    }
    A[i] = key;
    while(i>1 && A[i/2]<A[i]) {
        swap(A[i], A[i/2]);
        i = i / 2;
    } 
}

void insert(int key) {
    H++;
    A[H] = -INFTY;
    increaseKey(H, key);
}

int main() {
    int key;
    string com;

    while(1) {
        cin >> com;
        if(com=="end") {
            break;
        }
        else if(com=="insert") {
            cin >> key;
            insert(key);
        }
        else {
            cout << extract() << endl;
        }
    }

    return 0;
}
