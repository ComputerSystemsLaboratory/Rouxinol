#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <stack>
#include <climits>
#include <utility>
#include <cmath>
#include <iostream>

using namespace std;

#define rep(i,n,m) for(int i=n; i<=m; i++)
#define per(i,n,m) for(int i=n; i>=m; i--)
#define printi(x) printf("%d ", x)
#define printiln(x) printf("%d\n", x)
#define printiarray(a,n) for(int i=0; i<n-1; i++){printf("%d ", a[i]);} printf("%d\n", a[n-1])
#define copyiarray(a,n,b) for(int i=0; i<n; i++){b[i] = a[i];}
#define scani(x) scanf("%d", &x)
#define scaniarray(a,n) for(int i=0; i<n; i++){scanf("%d", &a[i]);}
#define scans(str) scanf("%s",str)
#define scanc(ch) scanf("%c", &ch)
#define mk make_pair
#define printd(x) printf("%lf ", x)
#define printdln(x) printf("%lf\n", x)
#define printllln(x) printf("%lld\n", x)

typedef long long ll;

const int MaxN = 200000;
int L[MaxN/2 + 2], R[MaxN/2 + 2];

ll merge(int *A, int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    ll count = 0;
    rep(i,0,n1-1) {
        L[i] = A[left+i];
    }
    rep(i,0,n2-1) {
        R[i] = A[mid + i];

    }
    L[n1] = R[n2] = INT_MAX;
    int i = 0;
    int j = 0;
    rep(k,left,right-1) {
        if(L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
            count += n1-i;

        }
    }
    return count;
}


ll mergesort(int *A, int left, int right) {
    if(left+1 < right){
        int mid = (left + right)/2;
        ll c1, c2, c3;
        c1 = mergesort(A, left, mid);
        c2 = mergesort(A, mid, right);
        c3 = merge(A, left, mid, right);
        return c1+c2+c3;
    } else {
        return 0;
    }
}

int main() {
    int n, B[MaxN];
    scani(n);
    scaniarray(B,n);
    // int count = 0;
    // count = bubbleSort(a,n);
    // printiln(count);
    ll count = mergesort(B,0,n);
    printllln(count);

    return 0;
}

