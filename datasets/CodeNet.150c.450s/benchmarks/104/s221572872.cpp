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

int* a;

void swap(int j, int k) {
    int temp = a[j];
    a[j] = a[k];
    a[k] = temp;
}

int main() {
    int w, n;
    cin >> w >> n;
    a = new int[w];
    REP(i,w) {
        a[i] = i+1;
    }
    REP(i,n) {
        int j, k;
        scanf("%d,%d", &j, &k);
        swap(j-1, k-1);
    }
    REP(i,w) {
        cout << a[i] << endl;
    }
    delete[] a;
    return 0;
}