#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int partition(int *A, int p, int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            int tmp=A[i];
            A[i]=A[j];
            A[j]=tmp;
        }
    }
    int tmp=A[i+1];
    A[i+1]=A[r];
    A[r]=tmp;

    return i+1;
}

int main(){
    int n, A[100000];
    cin >> n;    
    for(int i=0;i<n;i++) cin >> A[i];

    int q = partition(A, 0, n-1);
    for(int i=0;i<q;i++){
        if(i>0) cout << ' ';
        cout << A[i];
    }
    cout << " [" << A[q] << ']';
    for(int i=q+1;i<n;i++) cout << ' ' << A[i];
    cout << endl;

    return 0;
}
