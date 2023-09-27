#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int DEFAULT = 0;

struct SegmentTree {
    int n;
    vector<int> heap;
    
    SegmentTree(int n): n(n) {
        heap.assign(4 * n, DEFAULT);
    }
    void update(int id, int l, int r, int q, int v) {
        if (q < l || q > r) {
            return;
        }
        if (l == r) {
            heap[id] += v;
        }
        else {
            int m = l + (r - l)/2;
            update(2 * id, l, m, q, v);
            update(2 * id + 1, m + 1, r, q, v);
            pushup(id);
        }
    }
    
    int query (int id, int l, int r, int ql, int qr) {
        if (qr < l || ql > r) {
            return DEFAULT;
        }
        if (ql <= l && r <= qr) {
            return heap[id];
        }
        else {
            int m = l + (r - l)/2;
            return query(2 * id, l, m, ql, qr) + query(2 * id + 1, m + 1, r, ql, qr);
        }
    }
     
    void pushup(int id) {
        heap[id] = heap[2 * id] + heap[2 * id + 1]; 
    }  
};

int main() {
    int n, q;
    cin >> n >> q;
    SegmentTree sg = SegmentTree(n);
    
    for (int i = 0; i < q; i++) {
        int cmd;
        cin >> cmd;
        if (cmd == 0) {
            int pos, v;
            cin >> pos >> v;
            sg.update(1, 1, n, pos, v);
//            for (int i = 0; i < 4 * n; i++) {
//                cout << i << ":" << sg.heap[i] << endl; 
//            }
        }
        else {
            int ql, qr;
            cin >> ql >> qr;
            cout << sg.query(1, 1, n, ql, qr) << endl;
        }
    }
    return 0;
}