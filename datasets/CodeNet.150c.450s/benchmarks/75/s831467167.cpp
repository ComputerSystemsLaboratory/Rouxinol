#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <list>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

/* typedef */

typedef long long ll;

/* constant */
const int NIL = -1;
const int INF = 1 << 30;
const int MAX = 250;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
int n;

/* function */
int leftChild(int ind);
int rightChild(int ind);
int parent(int ind);
void maxHeapify(vector<int>& A, int ind);
void buildMaxHeap(vector<int>& A);

/* main */
int main(){

    cin >> n;
    vector<int> H(n+1, 0);
    for (int  i = 1; i <= n; i++) cin >> H[i];

    buildMaxHeap(H);

    for (int  i = 1; i <= n; i++) {
        cout << ' ';
        cout << H[i];
    } cout << '\n';

    return 0;

}

void maxHeapify(vector<int> &A, int ind) {
    int l = leftChild(ind);
    int r = rightChild(ind);
    int largest;
    if (l <= n && A[l] > A[ind])
        largest = l;
    else 
        largest = ind;
    if (r <= n && A[r] > A[largest])
        largest = r;
   
    if (largest != ind) {
        swap(A[largest], A[ind]);
        maxHeapify(A, largest);
    }
}

void buildMaxHeap(vector<int>& A) {
    int tree_size = n;
    for (int i = tree_size / 2; i >= 1; i--)
        maxHeapify(A, i);
}

int leftChild(int ind) {
    return ind * 2;
}

int rightChild(int ind) {
    return ind * 2 + 1;
}
int parent(int ind) {
    return ind / 2;
}


