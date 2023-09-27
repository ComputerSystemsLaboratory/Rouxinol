#include <iostream>
#include <vector>
using namespace std;

class Heap {
    vector<int> v;
    void maxHeapify(int i){
        int left,right,largest;
        left = 2 * (i + 1) - 1;
        right = 2 * (i + 1);
        largest = i;
        if (left < v.size() && v[left] > v[largest]){
            largest = left;
        }
        if (right < v.size() && v[right] > v[largest]){
            largest = right;
        }

        if (largest != i){
            swap(v[i],v[largest]);
            maxHeapify(largest);
        }
    }

public:
    Heap(const vector<int> &heap) : v(heap) {
        for (int i = (v.size() - 1) / 2; i >= 0; --i) maxHeapify(i);
    }

    void print(){
        for (auto item : v) cout << " "  << item;
        cout << endl;
    }

};


int main(){
//    freopen("in", "r", stdin);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    Heap heap(v);
    heap.print();
    return 0;
}