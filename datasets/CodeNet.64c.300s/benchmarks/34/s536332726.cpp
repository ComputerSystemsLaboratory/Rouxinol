#include <iostream>
using namespace std;

void insertSort(int a[],int n);
void datalog(int a[],int n);

int main(){
    int a[1000],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    datalog(a,n);
    insertSort(a,n);

    return 0;
}

void insertSort(int a[],int n){
    int v,j;
    for(int i=1;i<n;i++){
        v=a[i];
        j=i-1;
        while(0<=j && v<a[j]){
            a[j+1]=a[j];//一個ずらす//元々入ってたa[j+1]
            j--;
        }
        a[j+1]=v;
        datalog(a,n);
    }
}

void datalog(int a[],int n){
    for(int i=0;i<n;i++){
        cout << (i? " ": "") <<a[i];
    }
    cout <<"\n";
}


/*
algorothm
insertion sort(A,N)
   for i->n;
    v=A[i]
    j=i-1;
    while(j>=0 && A[j]>v)
        A[j+1]=A[j]
        j--
    A[j+1]=v
*/


