// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

vector<int> A(500010);
int H;

int left(int i){
    return 2 * i;
} 
int right(int i){
    return 2 * i + 1;
} 
int parent(int i){
    return i / 2;
} 

void maxHeapify(int i){
    int l = left(i), r = right(i);
    int largest = i;
    if(l <= H && A[l] > A[largest]) largest = l;
    if(r <= H && A[r] > A[largest]) largest = r;

    if(largest != i){
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

void buildMaxHeap(){
    for(int i = H / 2 ; i > 0; i--) maxHeapify(i);
}

int main(){
    cin >> H;
    for(int i = 1; i <= H; i++) cin >> A[i];
    buildMaxHeap();
    for(int i = 1; i <= H; i++) cout << " " << A[i];
    cout << endl;
}
