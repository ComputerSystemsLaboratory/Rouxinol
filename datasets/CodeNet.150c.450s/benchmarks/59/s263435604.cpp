#include<iostream>
using namespace std;
int n,v,j,A[100];

void trace(){
    for ( int i = 0;i < n; i++ ){
        if ( i ) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

int main(){
    cin >> n;
    for ( int i = 0; i < n; i++)cin >>A[i];
    trace();
    
    for ( int i = 0; i < n; i++){
        v=A[i];
        j = i - 1;
        while ((j >= 0) && (A[j] > v)){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        if(i>0)trace();
    }
    
    return 0;
}