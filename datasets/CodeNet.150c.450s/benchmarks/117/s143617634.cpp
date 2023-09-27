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

int cntt;

const int INFTY = 1e9;
void merge(vector<int> &A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L, R;
    REP(i,n1) L.push_back(A[left + i]);
    REP(i,n2) R.push_back(A[mid + i]);
    L.push_back(INFTY);
    R.push_back(INFTY);
    int i = 0;
    int j = 0;
    FOR(k, left, right) {
        cntt++;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i = i + 1;
        }else {
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void mergeSort(vector<int> &A, int left, int right) {
    cntt;
    if (left+1 < right) {
        int mid = (left + right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

void printvec(vector<int> A) {
    REP(i,A.size()-1) cout << A[i] << " ";
    cout << A[A.size()-1] << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    PUSH(n,v);
    mergeSort(v, 0, v.size());
    printvec(v);
    cout << cntt << endl;
    return 0;
}