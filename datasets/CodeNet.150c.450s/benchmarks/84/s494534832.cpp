// 反転数
#include<bits/stdc++.h>
using namespace std;

#define MAX 200000

int L[MAX/2+2], R[MAX/2+2];

long long merge(int A[], int size, int left, int mid, int right);
long long mergesort(int A[], int size, int left, int right);

int main(){
    int A[MAX], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    
    long long con = mergesort(A, n, 0, n);

    cout << con << endl;
}

long long merge(int A[], int size, int left, int mid, int right){
    // A[]を右と左にわけ、右と左の大きい方をとってく
    int i, j;
    long long cnt = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for(i = 0; i < n1; i++) L[i] = A[left+i];
    for(i = 0; i < n2; i++) R[i] = A[mid+i];
    L[n1] = R[n2] = INT_MAX;
    i = j = 0;
    for(int k = left; k < right; k++){
        if(L[i] <= R[j]){
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
            cnt+= n1-i; 
            // L,Rはソートずみ。この時左側の要素それぞれの反転数はn1-iで求められる
        }
    }
    return cnt;
}

long long mergesort(int A[], int size, int left, int right){
    long long v1,v2,v3;
    if(left+1 < right){
        int m = (left + right) /2;
        v1 = mergesort(A, size, left, m);
        v2 = mergesort(A, size, m, right);
        v3 = merge(A, size, left, m, right);
        return v1 + v2 + v3;
    }else return 0;
}
