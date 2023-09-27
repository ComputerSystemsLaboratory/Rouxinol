#include<iostream>
#include <utility>
using namespace std;
#define MAX 100000

int A[MAX], L[MAX], R[MAX];

int  partition(int p, int r){
    int x = A[r];
    int i = p - 1;
    int t;
    
    for(int j = p; j < r; j++){
        if(A[j] <= x){
            i++;
            t = A[j];
            A[j] = A[i];
            A[i] = t;
        }
    }
    
    t = A[r];
    A[r] = A[i + 1];
    A[i + 1] = t;
    
    return i+1;
}

int main(){
    int n, center;
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> A[i];
    
    center = partition(0, n-1);
    
    for(int i = 0; i < n; i++){
        if(i) cout << " ";
        
        if(i != center) cout << A[i];
        else cout << "[" << A[i] << "]";
    }
    cout << endl;
    
    return 0;
}
