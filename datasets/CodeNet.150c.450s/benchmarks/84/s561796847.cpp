#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
#define int(x) int x; scanf("%d",&x)
#define input(x) scanf("%d",&x)
#define rep(x,n) for(int x = 0; x < n; x++)
#define _br printf("\n")
#define INF 2000000000

typedef unsigned long long ull;

ull count_rev=0;
int A[200000];
int L[100002],R[100002];

void marge(int l, int m, int r){
    int nl = m-l;
    int nr = r-m;
    
    rep(i,nl) L[i] = A[l+i];
    rep(i,nr) R[i] = A[m+i];
    L[nl] = INF;
    R[nr] = INF;
    int countL = 0;
    int countR = 0;
    rep(i,nl+nr){
        if (L[countL] <= R[countR]) {
            A[l+countL+countR] = L[countL];
            countL++;
        }else{
            A[l+countL+countR] = R[countR];
            count_rev += nl - countL;
            countR++;
        }
    }
}

void divide(int l, int r){
    if (r-l > 1) {
        int m = (l+r)/2;
        divide(l,m);
        divide(m,r);
        marge(l,m,r);
    }
}

int main(){
    int n;
    cin >> n;
    rep(i,n) input(A[i]);
    
    divide(0,n);
    
    cout << count_rev << endl;
    
    return 0;
}