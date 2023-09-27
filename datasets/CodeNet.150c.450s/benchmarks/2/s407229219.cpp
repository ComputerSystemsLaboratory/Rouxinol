#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#include <vector>
int partition(vector<int>& A,int p,int r){
    int x = A[r];
    int i = p-1;
    int t;
    for(int j=p;j<r;j++){
        if(A[j] <= x){
            i++;
            t = A[i];
            A[i] = A[j];
            A[j] = t;
            // i++;
        }
    }
    
    t = A[i+1];
    A[i+1] = A[r];
    A[r] = t;
    return i+1;
}
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i,N){
        cin >> A[i];
    }
    int pivot = partition(A,0,N-1);
    rep(i,N){
        if(i==pivot){
            cout << "[" << A[i] << "]";
        }else{
            cout << A[i];
        }
        if(i < N-1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
