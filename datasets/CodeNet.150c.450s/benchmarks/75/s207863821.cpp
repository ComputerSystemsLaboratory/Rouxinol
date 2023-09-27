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

vector<int> cc;
int HH;

int left(int i) {
    return i*2;
}

int right(int i) {
    return i*2+1;
}

void exchange(vector<int> &v, int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void maxHeapify(vector<int> &v, int i) {
    int l = left(i);
    int r = right(i);
    int largest;
    if (l <= HH && cc[l] > cc[i]) {
        largest = l;
    }else {
        largest = i;
    }
    if (r <= HH && cc[r] > cc[largest]) {
        largest = r;
    }
    if (largest != i) {
        exchange(v,i,largest);
        maxHeapify(v, largest);
    }
}

void buildMaxHeap(vector<int> &v) {
    for (int i = HH/2; i > 0; i--) {
        maxHeapify(v, i);
    }
}

int main() {
    cin >> HH;
    cc.push_back(0);
    PUSH(HH, cc);
    buildMaxHeap(cc);
    FOR(i,1,HH+1) {
        cout << " " << cc[i];
    }
    cout << endl;
    return 0;
}