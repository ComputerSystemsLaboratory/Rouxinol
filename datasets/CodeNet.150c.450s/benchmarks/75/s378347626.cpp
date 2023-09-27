#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void maxHeap(vector<ll> &h, int i){
    int sub = i+1;
    int left = sub*2-1;
    int right = sub*2;
    int largest = sub-1;
    if(left <= h.size() && h[left] > h[largest]) largest = left;
    if(right <= h.size() && h[right] > h[largest]) largest = right;

    if(largest != i){
        swap(h[largest],h[i]);
        maxHeap(h,largest);
    }
}

void buildMaxHeap(vector<ll> &heap, int h){
    for(int i=h/2;i>=0;i--){
        maxHeap(heap, i);
    }
}

void print(const vector<ll> &h){
    for(ll a : h) cout << " " << a;
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<ll> heap;
    int h;
    cin >> h;
    ll a;
    for(int i=0;i<h;i++){
        cin >> a;
        heap.push_back(a);
    }

    buildMaxHeap(heap,h);
    print(heap);
    return 0;
}

