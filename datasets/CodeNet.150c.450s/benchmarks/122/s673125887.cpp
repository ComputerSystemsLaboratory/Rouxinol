#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

class Heap {
    vector<int> v;
    int getParentIndex(int index);
    int getLeftChildIndex(int index);
    int getRightChildIndex(int index);
    void exchange(int i, int j);
    bool isSmallerThanParent(int index);
    bool isBiggerThanLeftChild(int index);
    bool isBiggerThanRightChild(int index);
    int getBiggerChildIndex(int index);
public:
    void push(int n);
    int getMax();
    void eraseMax();
};

int Heap::getBiggerChildIndex(int index) {
    int leftIndex = getLeftChildIndex(index);
    int rightIndex = getRightChildIndex(index);
    if (isBiggerThanLeftChild(index)) {
        return rightIndex;
    }
    if (isBiggerThanRightChild(index)) {
        return leftIndex;
    }
    if (v[getLeftChildIndex(index)] > v[getRightChildIndex(index)]) {
        return leftIndex;
    }else {
        return rightIndex;
    }
}

bool Heap::isBiggerThanLeftChild(int index) {
    int leftIndex = getLeftChildIndex(index);
    if (leftIndex == -1) return true;
    else {
        if (v[leftIndex] < v[index]) return true;
        else return false;
    }
}

bool Heap::isBiggerThanRightChild(int index) {
    int rightIndex = getRightChildIndex(index);
    if (rightIndex == -1) return true;
    else {
        if (v[rightIndex] < v[index]) return true;
        else return false;
    }
}

bool Heap::isSmallerThanParent(int index) {
    int parentIndex = getParentIndex(index);
    if (parentIndex == -1) return true;
    else {
        if (v[parentIndex] >= v[index]) return true;
        else return false;
    }
}

int Heap::getParentIndex(int index) {
    return (index-1)/2;
}

int Heap::getLeftChildIndex(int index) {
    int a = index*2+1;
    if (a >= v.size()) {
        return -1;
    }else {
        return a;
    }
}

int Heap::getRightChildIndex(int index) {
    int a = index*2+2;
    if (a >= v.size()) {
        return -1;
    }else {
        return a;
    }
}

void Heap::exchange(int i, int j) {
    iter_swap(v.begin() + i, v.begin() + j);
}

void Heap::push(int n) {
    v.push_back(n);
    int nindex = v.size()-1;
    int parentIndex = getParentIndex(nindex);
    while (!isSmallerThanParent(nindex)) {
        exchange(nindex, parentIndex);
        nindex = parentIndex;
        parentIndex = getParentIndex(nindex);
    }
}

int Heap::getMax() {
    return v[0];
}

void Heap::eraseMax() {
    exchange(0, v.size()-1);
    v.pop_back();
    int nindex = 0;
    while (!(isBiggerThanLeftChild(nindex) && isBiggerThanRightChild(nindex))) {
        int biggerChildIndex = getBiggerChildIndex(nindex);
        exchange(nindex, biggerChildIndex);
        nindex = biggerChildIndex;
    }
}

int main() {
    string s;
    Heap heap;
    while(cin >> s) {
        if (s[0] == 'i') {
            int k;
            cin >> k;
            heap.push(k);
        }else if (s[1] == 'x') {
            cout << heap.getMax() << endl;
            heap.eraseMax();
        }else {
            break;
        }
    }
    return 0;
}