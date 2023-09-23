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

void exchange(int A[], int a, int b) {
    int temp = A[a];
    A[a] = A[b];
    A[b] = temp;
}

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p-1;
    for (int j = p; j < r; j++) {
        if (A[j] <= x) {
            i++;
            exchange(A, i, j);
        }
    }
    exchange(A, i+1, r);
    return i+1;
}

int main() {
    int n;
    cin >> n;
    int A[n];
    REP(i,n) {
        cin >> A[i];
    }
    int p = partition(A, 0, n-1);
    REP(i,p) {
        cout << A[i] << " ";
    }
    cout << "[" << A[p] << "]";
    FOR(i,p+1,n) {
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}