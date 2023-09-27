#include <bits/stdc++.h>
#include <tuple>

#define REP(i, n) for(int i=0;i<(int)(n);i++)
#define ALL(x) (x).begin(),(x).end()
const int INF = 1e9;

using namespace std;
int heap[250];

int main() {
    int k;
    cin >> k;
    REP(i, k) cin >> heap[i];
    REP(i, k){
        int parent = (i-1)/2;
        int left = 2 * (i + 1) - 1;
        int right = left + 1;
        cout << "node " << i+1 << ": key = " << heap[i] << ", ";
        if(i != 0 && 0 <= parent)
            cout << "parent key = " << heap[parent] << ", ";
        if(left < k)
            cout << "left key = " << heap[left] << ", ";
        if(right < k)
            cout << "right key = " << heap[right] << ", ";
        cout << endl;
    }
    return 0;
}