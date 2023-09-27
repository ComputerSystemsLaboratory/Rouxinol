// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

vector<int> A(2000010);
int H;

void heapIncreaseKey(int i, int k){
    if(i > 1 && A[i/2] < k){
        swap(A[i], A[i/2]);
        heapIncreaseKey(i/2, k);
    }
}

void insert(int k){
    H++;
    A[H] = k;
    heapIncreaseKey(H, k);
}

void maxHeapify(int i){
    int l = 2 * i, r = 2 * i + 1;
    int largest = i;
    if(l <= H && A[l] > A[largest]) largest = l;
    if(r <= H && A[r] > A[largest]) largest = r;

    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int heapExtractMax(){
    int heap_max = A[1];
    A[1] = A[H];
    H--;
    maxHeapify(1);
    return heap_max;
}

int main(){
    H = 0;
    while(1){
        string S;
        cin >> S;
        if(S == "insert"){
            int k;
            cin >> k;
            insert(k);
        }
        else if (S == "extract") {
            cout << heapExtractMax() << endl;
        }
        else break;
    }
}
