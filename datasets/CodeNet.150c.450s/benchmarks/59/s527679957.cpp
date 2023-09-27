#include <iostream>
using namespace std;

void trace(int a[],int n){
    string c="";
    for(int i=0;i<n;i++){
        cout<<c<<a[i];
        c=" ";
    }
    cout<<"\n";
}

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int v=a[i];
        int j=i-1;
        while(j>=0 && a[j]>v){
         a[j+1]=a[j];
         j--;
        }
        a[j+1]=v;
        trace(a,n);
    }
}

int main(void){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    trace(a,n);
    insertionSort(a,n);
}
