/*
 http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1612807
 */

#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <limits>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

long exc;
int L[100001];
int R[100001];

void merge2(vector<int> &arr, int left, int mid, int right) {
    int leftlen = mid - left;
    int rightlen = right - mid;
    REP(i,leftlen) L[i] = arr[left+i];
    REP(i,rightlen) R[i] = arr[mid+i];
    L[leftlen] = R[rightlen] = 2e9;
    int i = 0, j = 0;
    FOR(k, left, right) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            exc+=j;
        }else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergesort2(vector<int> &arr, int left, int right) {
    if (left+1 < right) {
        int mid = (left + right) / 2;
        mergesort2(arr, left, mid);
        mergesort2(arr, mid, right);
        merge2(arr, left, mid, right);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    PUSH(n,v);
    mergesort2(v, 0, n);
    cout << exc << endl;
    return 0;
}