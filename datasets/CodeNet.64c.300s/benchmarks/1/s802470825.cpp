#include <iostream>
using namespace std;

int partition(int A[],int p,int r){
    int x = A[r];
    int i = p;
    int temp;
    for(int j = p; j<r ; j++){
        if(A[j] <= x){
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
            i++;
        }
    }
    temp = A[i];
    A[i] = A[r];
    A[r] = temp;
    return i;
}

int main(){
    int n,r;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++) cin >> A[i];

    r = partition(A,0,n-1);

    for(int i=0; i<n; i++){
        if(i == r){
            cout << "[" << A[i] << "]";
        }else{
            cout << A[i];
        }
        if(i != n-1) cout << " ";
    }
    cout << endl;
    
}
