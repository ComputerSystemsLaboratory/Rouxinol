#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
#include<limits.h>
 
using namespace std;
int counter = 0;
void merge(int A[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int *B = (int *)calloc(n1+1, sizeof(int));
    int *C = (int *)calloc(n2+1, sizeof(int));
    for(int i=0; i<n1; i++){
        B[i] = A[l+i];
    }
    for(int i=0; i<n2; i++){
        C[i] = A[m+1+i];
    }
    B[n1] = INT_MAX;
    C[n2] = INT_MAX;
    int i = 0;
    int j = 0;
    for(int k=0; k<r-l+1; k++){
        counter++;
        if(B[i] < C[j]){
            A[k+l] = B[i];
            i++;
        }else{
            A[k+l] = C[j];
            j++;
        }
    }
}

void merge_sort(int A[], int l, int r){
    int m = (l+r)/2;
    if(l < r){
        merge_sort(A, l, m);
        merge_sort(A, m+1, r);
        merge(A, l, m, r);
    }
}

int main(){
    int n;
    cin >> n;
    int *A = new int[n];
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    merge_sort(A, 0, n-1);
    for(int i=0; i<n; i++){
        if(i != 0) cout << " ";
        cout << A[i];
    }
    cout << endl;
    cout << counter << endl;
}
