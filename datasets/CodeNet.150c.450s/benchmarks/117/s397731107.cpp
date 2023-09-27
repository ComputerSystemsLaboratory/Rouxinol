#include <bits/stdc++.h>
#include <iostream>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)
#define INF 999999999
using namespace std;
int cnt=0;
void merge(int A[],int left,int mid,int right);
void mergeSort(int A[],int left,int right);

int main()
{
    int n;
    cin >> n;
    int S[n];
    REP(i, n) cin >> S[i];
    mergeSort(S, 0, n);
    REP(i,n) {
        cout << S[i];
        if (i < n-1) cout << " ";
    }
    cout << endl << cnt << endl;;
    return 0;
}

void merge(int A[],int left,int mid,int right){
    int n1 = mid - left;
    int n2 = right - mid;
    int L[n1], R[n2];
    REP(i,n1) L[i] = A[left + i];
    REP(i,n2) R[i] = A[mid + i];
    L[n1] = INF;
    R[n2] = INF;
    int i = 0;
    int j = 0;
    FOR(k,left,right){
        cnt++;
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i = i + 1;
        } else {
            A[k] = R[j];
            j = j + 1;
        }
    }
}

void mergeSort(int A[],int left,int right){
    if (left+1 < right) {
        int mid = (left + right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid ,right);
    }
}