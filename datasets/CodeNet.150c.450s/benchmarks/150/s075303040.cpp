#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ll A[2000000], B[2000000], C[10001];

void counting_sort(ll *A, ll *B, int n, int k){
    for(int i=0;i<k;i++) C[i] = 0;
    for(int i=0;i<n;i++) C[A[i]]++;
    for(int i=1;i<k;i++) C[i]+=C[i-1];
    for(int i=n-1;i>=0;i--){
        B[C[A[i]]-1] = A[i];
        C[A[i]]--;
    }
}


int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> A[i];
    counting_sort(A, B, n, 10001);

    cout << B[0];
    for(int i=1;i<n;i++) cout << ' ' << B[i];
    cout << endl;    
    
    return 0;
}
