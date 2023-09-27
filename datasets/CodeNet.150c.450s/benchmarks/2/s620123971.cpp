#include <iostream>
using namespace std;

int partition(int A[],int p,int r){
    int x = A[r];
    int i = p-1;
    for(int j=p;j<=r-1;j++){
        if(A[j]<=x){
            i = i+1;
            int s = A[i];
            A[i] = A[j];
            A[j] = s;
        }
    }
    int c = A[i+1];
    A[i+1] = A[r];
    A[r] = c;
    return i+1;
}

int main(){
    int n;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    int w = partition(A,0,n-1);

    for(int i=0;i<n;i++){
        if(i==w)
            cout << "[" << A[i] << "] ";
        else if(i==n-1)
            cout << A[i] << endl;
        else
            cout << A[i] << " ";
    }

    return 0;
}
