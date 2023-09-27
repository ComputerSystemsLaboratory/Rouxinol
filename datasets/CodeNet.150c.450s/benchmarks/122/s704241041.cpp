#include<iostream>
#include<vector>
#define MAX 2000000
using namespace std;

int A[MAX+1];
int top;

void heapify(int index){
    int parent = index / 2;
    if (parent < 1) return;
    if (A[index] <= A[parent]) return;
    int tmp = A[index];
    A[index] = A[parent];
    A[parent] = tmp;
    heapify(parent);
}

void insert(int key){
    A[++top] = key;
    heapify(top);
}

void Maxheapify(int i){
    int left  = i * 2;
    int right = i * 2 + 1;
    int largest = i;
    if (left <= top  && A[left]  > A[largest]) {
        largest = left;
    }
    if (right <= top && A[right] > A[largest]) {
        largest = right;
    }
    if (largest == left || largest == right) {
        int tmp = A[i];
        A[i] = A[largest];
        A[largest] = tmp;
        Maxheapify(largest);
    }
}

void extract(){
    cout << A[1] << endl;
    A[1] = A[top--];
    Maxheapify(1);
}

int main(){
    while (1) {
        string command;
        cin >> command;
        if (command == "end") {
            return 0;
        }
        if (command == "insert") {
            int k;
            cin >> k;
            insert(k);
            continue;
        }
        if (command == "extract") {
            extract();
            continue;
        }
    }
    return 0;
}