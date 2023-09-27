#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int heap[500000];
int h;

void max_heapify(int i){
    int l = 2 * (i + 1) - 1;
    int r = l + 1;
    int largest;
    if(l < h && heap[l] > heap[i])
        largest = l;
    else
        largest = i;
    if(r < h && heap[r] > heap[largest])
        largest = r;
    if(largest != i){
        swap(heap[i], heap[largest]);
        max_heapify(largest);
    }
    return;
}

void build_max_heap(){
    for(int i = (h-1)/2 ; i >= 0; i--) {
        max_heapify(i);
    }
}

int main() {
    cin >> h;
    REP(i, h) cin >> heap[i];
    build_max_heap();
    REP(i, h) cout << " " << heap[i];
    cout << endl;
    return 0;
}