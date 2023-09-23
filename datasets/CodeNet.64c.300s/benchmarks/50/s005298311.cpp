#include<iostream>
using namespace std;

void trace(int A[100],int n){
    for ( int i = 0;i < n; i++ ){
        if ( i ) cout << " ";
        cout << A[i];
    }
    cout << endl;
}

/*void insertionSort(int A[100],int n){
    int v,j;
    for ( int i = 0; i < n; i++){
        v=A[i];
        j = i - 1;
        while ((j >= 0) && (A[j] > v)){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        if(i>0)trace(A,n);
    }
}*/

int bubbleSort(int A[100],int n){
    int v;
    int x = 0;
    int flag = 1;
    while (flag){
        flag = 0;
        for (int j = n-1;j>0;j--){
            if ( A[j] < A[j-1] ){
                v = A[j];
                A[j] = A[j-1];
                A[j-1] = v;
                flag = 1;
                x++;
            }
        }
    }
    trace(A,n);
    
    return x;
}

int main(){
    int n,A[100];
    cin >> n;
    for ( int i = 0; i < n; i++)cin >>A[i];
   
    //trace(A,n);
    //insertionSort(A,n);
    cout << bubbleSort(A,n) << endl;
    
    return 0;
}