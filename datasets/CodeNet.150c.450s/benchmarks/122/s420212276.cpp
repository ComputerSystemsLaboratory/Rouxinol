//Priority Queue
#include <iostream>

using namespace std;

const int MAX = 2000000;
int H = 0;
int A[MAX + 1];

int parent(int i) {return i/2;}
int left(int i) {return 2*i;}
int right(int i) {return 2*i+1;}

void maxHeapify(int i) {
    int l = left(i), r = right(i);

    int largest = i;
    if(l <= H && A[largest] < A[l]) largest = l;
    if(r <= H && A[largest] < A[r]) largest = r;

    if(largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

void insert(int k) {
    H++;
    A[H] = k;
    int i = H;
    while(parent(i) > 0 && A[parent(i)] < A[i]) {
        swap(A[i], A[parent(i)]);
        i = parent(i);
    }
}

int extract() {
    int k = A[1];
    A[1] = A[H];
    H--;
    maxHeapify(1);
    return k;
}

int main() {
    int k;
    string opr;
    while(1) {
        cin >> opr;
        if(opr == "insert") {
            cin >> k;
            insert(k);
        }
        else if(opr == "extract") cout << extract() << endl;
        else if(opr == "end") break;
    }
}
