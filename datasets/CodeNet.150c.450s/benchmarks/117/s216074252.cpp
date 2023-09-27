#include <bits/stdc++.h>
using namespace std;

int S[500000];
int n;
int cnt;

void merge(int l, int m, int r){
    int n1 = m - l;
    int n2 = r - m;
    int *L = (int *)malloc(sizeof(int)*(n1+1));
    int *R = (int *)malloc(sizeof(int)*(n2+1));
    for(int i=0; i<n1; i++)
        L[i] = S[l+i];
    for(int i=0; i<n2; i++)
        R[i] = S[m+i];
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    int i = 0, j = 0;
    for(int k = l; k < r; k++){
        if(L[i] <= R[j]){
            S[k] = L[i];
            i++;
        }else{
            S[k] = R[j];
            j++;
        }
        cnt++;
    }
    free(L);
    free(R);
}

void mergesort(int l, int r){
    if(l + 1 < r){
        int m = (l + r) / 2;
        mergesort(l, m);
        mergesort(m, r);
        merge(l, m, r);
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> S[i];
    mergesort(0, n);
    for(int i=0; i<n-1; i++){
        cout << S[i] << ' ';
    }
    cout << S[n-1] << endl;
    cout << cnt << endl;
}